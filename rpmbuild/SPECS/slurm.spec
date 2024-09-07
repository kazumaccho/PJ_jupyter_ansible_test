Name:           slurm
Version:        23.11.10
Release:        1%{?dist}
Summary:        Slurm Workload Manager

License:        GPLv2
URL:            https://slurm.schedmd.com/
Source0:        https://download.schedmd.com/slurm/slurm-%{version}.tar.bz2

BuildRequires:  gcc
BuildRequires:  make

Requires:       pmix
Requires:       ucx
Requires:       munge

%description
Slurm is a highly scalable cluster management and job scheduling system for large and small Linux clusters.

%prep
%setup -q

%build
./configure \
    --prefix=/opt/slurm/%{version} \
    --sysconfdir=/opt/slurm/%{version}/etc \
    --with-pmix=/opt/pmix/release \
    --with-ucx=/opt/ucx/release \
    --with-munge=/opt/munge/release

make %{?_smp_mflags}

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT
if [ -L /opt/slurm/release ]; then
    rm -f /opt/slurm/release
fi

# Create symlinks
ln -s /opt/slurm/%{version} /opt/slurm/release

# Copy systemd service files
install -Dm644 etc/slurmdbd.service %{buildroot}/etc/systemd/system/slurmdbd.service

# Create configuration directory
mkdir -p %{buildroot}/opt/slurm/release/etc

%files
/opt/slurm/%{version}
/etc/systemd/system/slurmdbd.service

%changelog
* Tue Sep 03 2024 Your Name <you@example.com> - 23.11.10-1
- Initial package

