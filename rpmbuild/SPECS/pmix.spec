Name:           pmix
Version:        4.2.9
Release:        1%{?dist}
Summary:        PMIx library

License:        BSD
URL:            https://github.com/openpmix/openpmix
Source0:        %{name}-%{version}.tar.gz

BuildRequires:  gcc, gcc-c++

%global debug_package %{nil} 

%description
PMIx is a standard for process management services used in high performance computing (HPC) environments.

%prep
%setup -q

%build
./configure --prefix=%{_prefix}/pmix/%{version} --with-libevent=/opt/libevent/release --with-hwloc=/opt/hwloc/release
make %{?_smp_mflags}

%install
rm -rf %{buildroot}
make install DESTDIR=%{buildroot}

%files
%{_prefix}/pmix/%{version}

%changelog
* Mon Sep 01 2024 Your Name <you@example.com> - 4.2.9-1
- Initial RPM release

