/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef UCX_CONFIG_H
#define UCX_CONFIG_H


/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Enable assertions */
#define ENABLE_ASSERT 1

/* Enable builtin memcpy */
#define ENABLE_BUILTIN_MEMCPY 1

/* Enable collecting data */
#define ENABLE_DEBUG_DATA 0

/* Enable thread support in UCP and UCT */
#define ENABLE_MT 0

/* Enable checking user parameters */
#define ENABLE_PARAMS_CHECK 1

/* Enable statistics */
/* #undef ENABLE_STATS */

/* Enable tuning */
/* #undef ENABLE_TUNING */

/* Enable Groups and collective operations support (UCG) */
/* #undef ENABLE_UCG */

/* Fuse API version */
/* #undef FUSE_USE_VERSION */

/* bfd_section_size 2-args */
/* #undef HAVE_1_ARG_BFD_SECTION_SIZE */

/* Huawei Kunpeng 920 */
/* #undef HAVE_AARCH64_HI1620 */

/* Cavium ThunderX1 */
/* #undef HAVE_AARCH64_THUNDERX1 */

/* Cavium ThunderX2 */
/* #undef HAVE_AARCH64_THUNDERX2 */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Check attribute [optimize] */
#define HAVE_ATTRIBUTE_NOOPTIMIZE 1

/* user defined cache line size */
/* #undef HAVE_CACHE_LINE_SIZE */

/* Define to 1 if the system has the type `cap_user_data_t'. */
/* #undef HAVE_CAP_USER_DATA_T */

/* Define to 1 if the system has the type `cap_user_header_t'. */
/* #undef HAVE_CAP_USER_HEADER_T */

/* Define to 1 if you have the `clearenv' function. */
#define HAVE_CLEARENV 1

/* Define to 1 if you have the `cplus_demangle' function. */
/* #undef HAVE_CPLUS_DEMANGLE */

/* Define to 1 if you have the `cpuset_getaffinity' function. */
/* #undef HAVE_CPUSET_GETAFFINITY */

/* Define to 1 if you have the `cpuset_setaffinity' function. */
/* #undef HAVE_CPUSET_SETAFFINITY */

/* Define to 1 if the system has the type `cpuset_t'. */
/* #undef HAVE_CPUSET_T */

/* Define to 1 if the system has the type `cpu_set_t'. */
#define HAVE_CPU_SET_T 1

/* Enable CUDA support */
/* #undef HAVE_CUDA */

/* Define to 1 if you have the <cuda.h> header file. */
/* #undef HAVE_CUDA_H */

/* Define to 1 if you have the <cuda_runtime.h> header file. */
/* #undef HAVE_CUDA_RUNTIME_H */

/* DC DV support */
/* #undef HAVE_DC_DV */

/* Define to 1 if you have the declaration of `asprintf', and to 0 if you
   don't. */
#define HAVE_DECL_ASPRINTF 1

/* Define to 1 if you have the declaration of `basename', and to 0 if you
   don't. */
#define HAVE_DECL_BASENAME 1

/* Define to 1 if you have the declaration of `bfd_get_section_flags', and to
   0 if you don't. */
/* #undef HAVE_DECL_BFD_GET_SECTION_FLAGS */

/* Define to 1 if you have the declaration of `bfd_get_section_vma', and to 0
   if you don't. */
/* #undef HAVE_DECL_BFD_GET_SECTION_VMA */

/* Define to 1 if you have the declaration of `bfd_section_flags', and to 0 if
   you don't. */
/* #undef HAVE_DECL_BFD_SECTION_FLAGS */

/* Define to 1 if you have the declaration of `bfd_section_vma', and to 0 if
   you don't. */
/* #undef HAVE_DECL_BFD_SECTION_VMA */

/* Define to 1 if you have the declaration of `CPU_ISSET', and to 0 if you
   don't. */
#define HAVE_DECL_CPU_ISSET 1

/* Define to 1 if you have the declaration of `CPU_ZERO', and to 0 if you
   don't. */
#define HAVE_DECL_CPU_ZERO 1

/* Define to 1 if you have the declaration of `ethtool_cmd_speed', and to 0 if
   you don't. */
#define HAVE_DECL_ETHTOOL_CMD_SPEED 1

/* Define to 1 if you have the declaration of `fmemopen', and to 0 if you
   don't. */
#define HAVE_DECL_FMEMOPEN 1

/* Define to 1 if you have the declaration of `fuse_mount', and to 0 if you
   don't. */
#define HAVE_DECL_FUSE_MOUNT 0

/* Define to 1 if you have the declaration of `fuse_open_channel', and to 0 if
   you don't. */
#define HAVE_DECL_FUSE_OPEN_CHANNEL 0

/* Define to 1 if you have the declaration of `fuse_unmount', and to 0 if you
   don't. */
#define HAVE_DECL_FUSE_UNMOUNT 0

/* Define to 1 if you have the declaration of `F_SETOWN_EX', and to 0 if you
   don't. */
#define HAVE_DECL_F_SETOWN_EX 1

/* Define to 1 if you have the declaration of `gdr_copy_to_mapping', and to 0
   if you don't. */
/* #undef HAVE_DECL_GDR_COPY_TO_MAPPING */

/* Define to 1 if you have the declaration of `getauxval', and to 0 if you
   don't. */
#define HAVE_DECL_GETAUXVAL 1

/* Define to 1 if you have the declaration of `IBV_ACCESS_ON_DEMAND', and to 0
   if you don't. */
/* #undef HAVE_DECL_IBV_ACCESS_ON_DEMAND */

/* Define to 1 if you have the declaration of `IBV_ACCESS_RELAXED_ORDERING',
   and to 0 if you don't. */
/* #undef HAVE_DECL_IBV_ACCESS_RELAXED_ORDERING */

/* Define to 1 if you have the declaration of `ibv_advise_mr', and to 0 if you
   don't. */
/* #undef HAVE_DECL_IBV_ADVISE_MR */

/* Define to 1 if you have the declaration of `ibv_alloc_dm', and to 0 if you
   don't. */
/* #undef HAVE_DECL_IBV_ALLOC_DM */

/* Define to 1 if you have the declaration of `ibv_alloc_td', and to 0 if you
   don't. */
/* #undef HAVE_DECL_IBV_ALLOC_TD */

/* Define to 1 if you have the declaration of
   `IBV_CREATE_CQ_ATTR_IGNORE_OVERRUN', and to 0 if you don't. */
/* #undef HAVE_DECL_IBV_CREATE_CQ_ATTR_IGNORE_OVERRUN */

/* Define to 1 if you have the declaration of `ibv_create_cq_ex', and to 0 if
   you don't. */
/* #undef HAVE_DECL_IBV_CREATE_CQ_EX */

/* Define to 1 if you have the declaration of `ibv_create_qp_ex', and to 0 if
   you don't. */
/* #undef HAVE_DECL_IBV_CREATE_QP_EX */

/* Define to 1 if you have the declaration of `ibv_create_srq', and to 0 if
   you don't. */
#define HAVE_DECL_IBV_CREATE_SRQ 0

/* Define to 1 if you have the declaration of `ibv_create_srq_ex', and to 0 if
   you don't. */
/* #undef HAVE_DECL_IBV_CREATE_SRQ_EX */

/* Define to 1 if you have the declaration of `IBV_EVENT_GID_CHANGE', and to 0
   if you don't. */
/* #undef HAVE_DECL_IBV_EVENT_GID_CHANGE */

/* Define to 1 if you have the declaration of `ibv_event_type_str', and to 0
   if you don't. */
#define HAVE_DECL_IBV_EVENT_TYPE_STR 0

/* Define to 1 if you have the declaration of `ibv_get_async_event', and to 0
   if you don't. */
#define HAVE_DECL_IBV_GET_ASYNC_EVENT 0

/* Define to 1 if you have the declaration of `ibv_get_device_name', and to 0
   if you don't. */
#define HAVE_DECL_IBV_GET_DEVICE_NAME 0

/* Define to 1 if you have the declaration of `IBV_LINK_LAYER_ETHERNET', and
   to 0 if you don't. */
/* #undef HAVE_DECL_IBV_LINK_LAYER_ETHERNET */

/* Define to 1 if you have the declaration of `IBV_LINK_LAYER_INFINIBAND', and
   to 0 if you don't. */
/* #undef HAVE_DECL_IBV_LINK_LAYER_INFINIBAND */

/* Define to 1 if you have the declaration of `IBV_QPF_GRH_REQUIRED', and to 0
   if you don't. */
/* #undef HAVE_DECL_IBV_QPF_GRH_REQUIRED */

/* have upstream ibv_query_device_ex */
/* #undef HAVE_DECL_IBV_QUERY_DEVICE_EX */

/* Define to 1 if you have the declaration of `ibv_query_gid', and to 0 if you
   don't. */
#define HAVE_DECL_IBV_QUERY_GID 0

/* Define to 1 if you have the declaration of `ibv_reg_dmabuf_mr', and to 0 if
   you don't. */
/* #undef HAVE_DECL_IBV_REG_DMABUF_MR */

/* Define to 1 if you have the declaration of `ibv_set_ece', and to 0 if you
   don't. */
/* #undef HAVE_DECL_IBV_SET_ECE */

/* Define to 1 if you have the declaration of `IBV_TRANSPORT_UNSPECIFIED', and
   to 0 if you don't. */
/* #undef HAVE_DECL_IBV_TRANSPORT_UNSPECIFIED */

/* Define to 1 if you have the declaration of `IBV_TRANSPORT_USNIC', and to 0
   if you don't. */
/* #undef HAVE_DECL_IBV_TRANSPORT_USNIC */

/* Define to 1 if you have the declaration of `IBV_TRANSPORT_USNIC_UDP', and
   to 0 if you don't. */
/* #undef HAVE_DECL_IBV_TRANSPORT_USNIC_UDP */

/* Define to 1 if you have the declaration of `ibv_wc_status_str', and to 0 if
   you don't. */
#define HAVE_DECL_IBV_WC_STATUS_STR 0

/* Define to 1 if you have the declaration of `inotify_add_watch', and to 0 if
   you don't. */
#define HAVE_DECL_INOTIFY_ADD_WATCH 1

/* Define to 1 if you have the declaration of `inotify_init', and to 0 if you
   don't. */
#define HAVE_DECL_INOTIFY_INIT 1

/* Define to 1 if you have the declaration of `IN_ATTRIB', and to 0 if you
   don't. */
#define HAVE_DECL_IN_ATTRIB 1

/* Define to 1 if you have the declaration of `IPPROTO_TCP', and to 0 if you
   don't. */
#define HAVE_DECL_IPPROTO_TCP 1

/* Define to 1 if you have the declaration of `MADV_FREE', and to 0 if you
   don't. */
#define HAVE_DECL_MADV_FREE 1

/* Define to 1 if you have the declaration of `MADV_REMOVE', and to 0 if you
   don't. */
#define HAVE_DECL_MADV_REMOVE 1

/* Define to 1 if you have the declaration of
   `MLX5DV_CQ_INIT_ATTR_MASK_COMPRESSED_CQE', and to 0 if you don't. */
/* #undef HAVE_DECL_MLX5DV_CQ_INIT_ATTR_MASK_COMPRESSED_CQE */

/* Define to 1 if you have the declaration of
   `MLX5DV_CQ_INIT_ATTR_MASK_CQE_SIZE', and to 0 if you don't. */
/* #undef HAVE_DECL_MLX5DV_CQ_INIT_ATTR_MASK_CQE_SIZE */

/* Define to 1 if you have the declaration of `mlx5dv_create_qp', and to 0 if
   you don't. */
/* #undef HAVE_DECL_MLX5DV_CREATE_QP */

/* Define to 1 if you have the declaration of `MLX5DV_DCTYPE_DCT', and to 0 if
   you don't. */
/* #undef HAVE_DECL_MLX5DV_DCTYPE_DCT */

/* Define to 1 if you have the declaration of
   `mlx5dv_devx_subscribe_devx_event', and to 0 if you don't. */
/* #undef HAVE_DECL_MLX5DV_DEVX_SUBSCRIBE_DEVX_EVENT */

/* Define to 1 if you have the declaration of `mlx5dv_devx_umem_reg_ex', and
   to 0 if you don't. */
/* #undef HAVE_DECL_MLX5DV_DEVX_UMEM_REG_EX */

/* Define to 1 if you have the declaration of `mlx5dv_init_obj', and to 0 if
   you don't. */
/* #undef HAVE_DECL_MLX5DV_INIT_OBJ */

/* Define to 1 if you have the declaration of `mlx5dv_is_supported', and to 0
   if you don't. */
/* #undef HAVE_DECL_MLX5DV_IS_SUPPORTED */

/* Define to 1 if you have the declaration of `MLX5DV_OBJ_AH', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MLX5DV_OBJ_AH */

/* Define to 1 if you have the declaration of
   `MLX5DV_QP_CREATE_ALLOW_SCATTER_TO_CQE', and to 0 if you don't. */
/* #undef HAVE_DECL_MLX5DV_QP_CREATE_ALLOW_SCATTER_TO_CQE */

/* Define to 1 if you have the declaration of `MLX5DV_UAR_ALLOC_TYPE_BF', and
   to 0 if you don't. */
/* #undef HAVE_DECL_MLX5DV_UAR_ALLOC_TYPE_BF */

/* Define to 1 if you have the declaration of `MLX5DV_UAR_ALLOC_TYPE_NC', and
   to 0 if you don't. */
/* #undef HAVE_DECL_MLX5DV_UAR_ALLOC_TYPE_NC */

/* Define to 1 if you have the declaration of `POSIX_MADV_DONTNEED', and to 0
   if you don't. */
#define HAVE_DECL_POSIX_MADV_DONTNEED 1

/* Define to 1 if you have the declaration of `PR_SET_PTRACER', and to 0 if
   you don't. */
#define HAVE_DECL_PR_SET_PTRACER 1

/* Define to 1 if you have the declaration of `SOL_SOCKET', and to 0 if you
   don't. */
#define HAVE_DECL_SOL_SOCKET 1

/* Define to 1 if you have the declaration of `SO_KEEPALIVE', and to 0 if you
   don't. */
#define HAVE_DECL_SO_KEEPALIVE 1

/* Define to 1 if you have the declaration of `SPEED_UNKNOWN', and to 0 if you
   don't. */
#define HAVE_DECL_SPEED_UNKNOWN 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the declaration of `SYS_brk', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_BRK 1

/* Define to 1 if you have the declaration of `SYS_ipc', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_IPC 0

/* Define to 1 if you have the declaration of `SYS_madvise', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_MADVISE 1

/* Define to 1 if you have the declaration of `SYS_mmap', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_MMAP 1

/* Define to 1 if you have the declaration of `SYS_mremap', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_MREMAP 1

/* Define to 1 if you have the declaration of `SYS_munmap', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_MUNMAP 1

/* Define to 1 if you have the declaration of `SYS_shmat', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_SHMAT 1

/* Define to 1 if you have the declaration of `SYS_shmdt', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_SHMDT 1

/* Define to 1 if you have the declaration of `TCP_KEEPCNT', and to 0 if you
   don't. */
#define HAVE_DECL_TCP_KEEPCNT 1

/* Define to 1 if you have the declaration of `TCP_KEEPIDLE', and to 0 if you
   don't. */
#define HAVE_DECL_TCP_KEEPIDLE 1

/* Define to 1 if you have the declaration of `TCP_KEEPINTVL', and to 0 if you
   don't. */
#define HAVE_DECL_TCP_KEEPINTVL 1

/* Define to 1 if you have the declaration of `__ppc_get_timebase', and to 0
   if you don't. */
#define HAVE_DECL___PPC_GET_TIMEBASE 0

/* Define to 1 if you have the declaration of `__ppc_get_timebase_freq', and
   to 0 if you don't. */
#define HAVE_DECL___PPC_GET_TIMEBASE_FREQ 0

/* Enable detailed backtrace */
/* #undef HAVE_DETAILED_BACKTRACE */

/* DEVX support */
/* #undef HAVE_DEVX */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <endian.h,> header file. */
/* #undef HAVE_ENDIAN_H_ */

/* Define to 1 if you have the `fuse_mount' function. */
/* #undef HAVE_FUSE_MOUNT */

/* Define to 1 if you have the `fuse_open_channel' function. */
/* #undef HAVE_FUSE_OPEN_CHANNEL */

/* Define to 1 if you have the `fuse_unmount' function. */
/* #undef HAVE_FUSE_UNMOUNT */

/* Define to 1 if you have the <gdrapi.h> header file. */
/* #undef HAVE_GDRAPI_H */

/* Enable HIP support */
/* #undef HAVE_HIP */

/* Define to 1 if you have the <hip_runtime.h> header file. */
/* #undef HAVE_HIP_RUNTIME_H */

/* Define to 1 if you have the `hsa_amd_portable_export_dmabuf' function. */
/* #undef HAVE_HSA_AMD_PORTABLE_EXPORT_DMABUF */

/* Define to 1 if you have the <hsa_ext_amd.h> header file. */
/* #undef HAVE_HSA_EXT_AMD_H */

/* Define to 1 if you have the <hsa.h> header file. */
/* #undef HAVE_HSA_H */

/* high-resolution hardware timer enabled */
#define HAVE_HW_TIMER 1

/* IB support */
/* #undef HAVE_IB */

/* Device Memory support */
/* #undef HAVE_IBV_DM */

/* struct in6_addr has s6_addr32 member */
#define HAVE_IN6_ADDR_S6_ADDR32 1

/* struct in6_addr is BSD-style */
/* #undef HAVE_IN6_ADDR_U6_ADDR32 */

/* Define to 1 if you have the <infiniband/mlx5dv.h> header file. */
/* #undef HAVE_INFINIBAND_MLX5DV_H */

/* Enable inotify support */
#define HAVE_INOTIFY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* struct iphdr has daddr member */
/* #undef HAVE_IPHDR_DADDR */

/* struct ip has ip_dst member */
#define HAVE_IP_IP_DST 1

/* Define to 1 if you have the <jni.h> header file. */
/* #undef HAVE_JNI_H */

/* Define to 1 if you have the <jni_md.h> header file. */
/* #undef HAVE_JNI_MD_H */

/* Define to 1 if you have the <level_zero/ze_api.h> header file. */
/* #undef HAVE_LEVEL_ZERO_ZE_API_H */

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the `rt' library (-lrt). */
#define HAVE_LIBRT 1

/* Define to 1 if you have the <linux/futex.h> header file. */
#define HAVE_LINUX_FUTEX_H 1

/* Define to 1 if you have the <linux/ip.h> header file. */
#define HAVE_LINUX_IP_H 1

/* Define to 1 if you have the <linux/mman.h> header file. */
#define HAVE_LINUX_MMAN_H 1

/* Enable Infiniband MAD support */
/* #undef HAVE_MAD */

/* Define to 1 if you have the `malloc_get_state' function. */
/* #undef HAVE_MALLOC_GET_STATE */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* malloc hooks support */
#define HAVE_MALLOC_HOOK 1

/* Define to 1 if you have the <malloc_np.h> header file. */
/* #undef HAVE_MALLOC_NP_H */

/* Define to 1 if you have the `malloc_set_state' function. */
/* #undef HAVE_MALLOC_SET_STATE */

/* Define to 1 if you have the `malloc_trim' function. */
#define HAVE_MALLOC_TRIM 1

/* Define to 1 if you have the `memalign' function. */
#define HAVE_MEMALIGN 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* mlx5 DV support */
/* #undef HAVE_MLX5_DV */

/* mlx5 UD bare-metal support */
/* #undef HAVE_MLX5_HW_UD */

/* MPI support */
/* #undef HAVE_MPI */

/* Define to 1 if you have the `mremap' function. */
#define HAVE_MREMAP 1

/* Define to 1 if you have the <netinet/ip.h> header file. */
#define HAVE_NETINET_IP_H 1

/* Define to 1 if you have the <net/ethernet.h> header file. */
#define HAVE_NET_ETHERNET_H 1

/* Define to 1 if you have the <nvml.h> header file. */
/* #undef HAVE_NVML_H */

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Prefetch support */
/* #undef HAVE_PREFETCH */

/* Enable profiling */
/* #undef HAVE_PROFILING */

/* Define to 1 if you have the <pthread_np.h> header file. */
/* #undef HAVE_PTHREAD_NP_H */

/* Enable ROCM support */
/* #undef HAVE_ROCM */

/* Define to 1 if you have the `sched_getaffinity' function. */
#define HAVE_SCHED_GETAFFINITY 1

/* Define to 1 if you have the `sched_setaffinity' function. */
#define HAVE_SCHED_SETAFFINITY 1

/* struct sigaction has sa_restorer member */
#define HAVE_SIGACTION_SA_RESTORER 1

/* struct sigevent has sigev_notify_thread_id */
/* #undef HAVE_SIGEVENT_SIGEV_NOTIFY_THREAD_ID */

/* struct sigevent has _sigev_un._tid */
#define HAVE_SIGEVENT_SIGEV_UN_TID 1

/* Define to 1 if the system has the type `sighandler_t'. */
#define HAVE_SIGHANDLER_T 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if the system has the type `struct dl_phdr_info'. */
#define HAVE_STRUCT_DL_PHDR_INFO 1

/* Define to 1 if `odp_caps' is a member of `struct ibv_device_attr_ex'. */
/* #undef HAVE_STRUCT_IBV_DEVICE_ATTR_EX_ODP_CAPS */

/* Define to 1 if `pci_atomic_caps' is a member of `struct
   ibv_device_attr_ex'. */
/* #undef HAVE_STRUCT_IBV_DEVICE_ATTR_EX_PCI_ATOMIC_CAPS */

/* Define to 1 if `flags' is a member of `struct ibv_tm_caps'. */
/* #undef HAVE_STRUCT_IBV_TM_CAPS_FLAGS */

/* Define to 1 if `cq_uar' is a member of `struct mlx5dv_cq'. */
/* #undef HAVE_STRUCT_MLX5DV_CQ_CQ_UAR */

/* Define to 1 if `ib_stride_index' is a member of `struct mlx5_cqe64'. */
/* #undef HAVE_STRUCT_MLX5_CQE64_IB_STRIDE_INDEX */

/* Define to 1 if `rmac' is a member of `struct mlx5_grh_av'. */
/* #undef HAVE_STRUCT_MLX5_GRH_AV_RMAC */

/* Define to 1 if `base' is a member of `struct mlx5_wqe_av'. */
/* #undef HAVE_STRUCT_MLX5_WQE_AV_BASE */

/* Linux capability API support */
/* #undef HAVE_SYS_CAPABILITY_H */

/* Define to 1 if you have the <sys/cpuset.h> header file. */
/* #undef HAVE_SYS_CPUSET_H */

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
#define HAVE_SYS_EPOLL_H 1

/* Define to 1 if you have the <sys/eventfd.h> header file. */
#define HAVE_SYS_EVENTFD_H 1

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/platform/ppc.h> header file. */
/* #undef HAVE_SYS_PLATFORM_PPC_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/thr.h> header file. */
/* #undef HAVE_SYS_THR_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* DC transport support */
/* #undef HAVE_TL_DC */

/* RC transport support */
/* #undef HAVE_TL_RC */

/* UD transport support */
/* #undef HAVE_TL_UD */

/* Defined if UGNI transport exists */
/* #undef HAVE_TL_UGNI */

/* Use ptmalloc-2.8.6 version */
#define HAVE_UCM_PTMALLOC286 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Enable ZE support */
/* #undef HAVE_ZE */

/* Define to 1 if you have the `__aarch64_sync_cache_range' function. */
/* #undef HAVE___AARCH64_SYNC_CACHE_RANGE */

/* Define to 1 if you have the `__clear_cache' function. */
#define HAVE___CLEAR_CACHE 1

/* Define to 1 if you have the `__curbrk' function. */
#define HAVE___CURBRK 1

/* Define to 1 if the system has the type `__sighandler_t'. */
#define HAVE___SIGHANDLER_T 1

/* IB Tag Matching support */
/* #undef IBV_HW_TM */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 to disable Valgrind annotations. */
#define NVALGRIND 1

/* Name of package */
#define PACKAGE "ucx"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "ucx"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ucx 1.17"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "ucx"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.17"

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* Enable BISTRO hooks */
#define UCM_BISTRO_HOOKS 1

/* Highest log level */
#define UCS_MAX_LOG_LEVEL UCS_LOG_LEVEL_TRACE_POLL

/* Enable TCP keepalive configuration */
#define UCT_TCP_EP_KEEPALIVE 1

/* Enable packet header inspection/rewriting in UCT/UD */
#define UCT_UD_EP_DEBUG_HOOKS 0

/* Set alignment assumption for compiler */
/* #undef UCX_ALLOC_ALIGN */

/* UCX configure flags */
#define UCX_CONFIGURE_FLAGS "--prefix=/usr/ucx/1.17.0"

/* UCX module sub-directory */
#define UCX_MODULE_SUBDIR "ucx"

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "1.17"

/* io_demo CUDA support */
/* #undef WITH_IODEMO_CUDA */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Test loadable modules */
#define test_MODULES ":module"

/* UCM loadable modules */
#define ucm_MODULES ""

/* UCS loadable modules */
#define ucs_MODULES ""

/* UCT loadable modules */
#define uct_MODULES ":cma"

/* CUDA loadable modules */
#define uct_cuda_MODULES ""

/* IB loadable modules */
#define uct_ib_MODULES ""

/* ROCM loadable modules */
#define uct_rocm_MODULES ""

/* Perftest loadable modules */
#define ucx_perftest_MODULES ""


#endif /* UCX_CONFIG_H */

