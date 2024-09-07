Name:           hwloc
Version:        2.10.0
Release:        1%{?dist}
Summary:        Portable Hardware Locality

License:        BSD
URL:            https://www.open-mpi.org/software/hwloc/
Source0:        %{name}-%{version}.tar.gz

BuildRequires:  gcc, make

%description
hwloc provides command line tools and a C API to obtain the hierarchical map of key computing resources.

%prep
%setup -q

%build
./configure --prefix=%{_prefix}/hwloc/2.10.0
make %{?_smp_mflags}

%install
rm -rf %{buildroot}
make install DESTDIR=%{buildroot}

%files
%{_prefix}/hwloc/2.10.0

%changelog
* Mon Sep 01 2024 Your Name <your.email@example.com> - 2.10.0-1
- Initial RPM release

