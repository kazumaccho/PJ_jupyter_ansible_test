Name:           ucx
Version:        1.17.0
Release:        1%{?dist}
Summary:        UCX - Unified Communication X framework

License:        BSD-3-Clause
URL:            https://github.com/openucx/ucx
Source0:        https://github.com/openucx/ucx/releases/download/v%{version}/ucx-%{version}.tar.gz

BuildRequires:  gcc, gcc-c++, make, pkgconfig, autoconf, automake, libtool

%description
UCX is a communication framework for HPC systems, providing low-latency and high-bandwidth communication.

%prep
%setup -q

%build
./configure --prefix=%{_prefix}/ucx/%{version}
make %{?_smp_mflags}

%install
rm -rf %{buildroot}
make install DESTDIR=%{buildroot}

%files
%{_prefix}/ucx/%{version}

%changelog
* Tue Sep 03 2024 Your Name <your.email@example.com> - 1.17.0-1
- Initial RPM package for UCX

