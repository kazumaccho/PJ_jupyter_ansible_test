Name:           openmpi
Version:        5.0.5
Release:        1%{?dist}
Summary:        OpenMPI v5.0.5

License:        BSD
URL:            https://www.open-mpi.org/
Source0:        https://download.open-mpi.org/release/open-mpi/v5.0/openmpi-5.0.5.tar.gz

BuildRequires:  gcc, gcc-c++, make

%description
Open MPI is a project combining technologies and resources from several other projects 
(FT-MPI, LA-MPI, LAM/MPI, and PACX-MPI) in order to build the best MPI library available.

%prep
%setup -q

%build
./configure --prefix=%{_prefix}/openmpi-%{version} --with-libevent=/opt/libevent/release --with-hwloc=/opt/hwloc/release --with-pmix=/opt/pmix/release --with-slurm
make %{?_smp_mflags}

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT

%files
%{_prefix}/openmpi-%{version}

%changelog
* Mon Aug 19 2024 Your Name <your.email@example.com> - 5.0.5-1
- Initial RPM release of OpenMPI 5.0.5

