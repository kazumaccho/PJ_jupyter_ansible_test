Name:           munge
Version:        0.5.15
Release:        1%{?dist}
Summary:        MUNGE (MUNGE Uid 'N' Gid Emporium) is an authentication service

License:        GPLv3
URL:            https://github.com/dun/munge
Source0:        %{name}-%{version}.tar.gz

BuildRequires:  gcc, make, systemd

%description
MUNGE (MUNGE Uid 'N' Gid Emporium) is an authentication service for creating and validating credentials.

%prep
%setup -q -n munge-munge-%{version}

%build
./bootstrap
%configure --prefix=/opt/munge/%{version} \
    --sysconfdir=/opt/munge/%{version}/etc \
    --localstatedir=/var \
    --with-runstatedir=/run \
    --bindir=/opt/munge/%{version}/bin \
    --sbindir=/opt/munge/%{version}/sbin \
    --libdir=/opt/munge/%{version}/lib \
    --mandir=/opt/munge/%{version}/share/man
make %{?_smp_mflags}

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT
ln -s /opt/munge/%{version} $RPM_BUILD_ROOT/opt/munge/release

# systemd service file
mkdir -p $RPM_BUILD_ROOT/etc/systemd/system
install -m 644 src/etc/munge.systemd.service $RPM_BUILD_ROOT/etc/systemd/system/munge.service

%files
%license COPYING
%doc README.md
/opt/munge/%{version}
/opt/munge/release
/etc/systemd/system/munge.service
/usr/include/munge.h

%post
systemctl daemon-reload

%preun
if [ $1 -eq 0 ]; then
    systemctl stop munge.service
    systemctl disable munge.service
fi

%postun
if [ $1 -eq 0 ]; then
    systemctl daemon-reload
fi

%changelog
* Mon Sep 1 2024 Your Name <your.email@example.com> - 0.5.15-1
- Initial RPM release

