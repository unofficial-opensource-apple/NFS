/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _NLM_PROT_H_RPCGEN
#define _NLM_PROT_H_RPCGEN

#define RPCGEN_VERSION	199506

#include <oncrpc/rpc.h>

#define LM_MAXSTRLEN	1024
#define MAXNAMELEN	LM_MAXSTRLEN+1

enum nlm_stats {
	nlm_granted = 0,
	nlm_denied = 1,
	nlm_denied_nolocks = 2,
	nlm_blocked = 3,
	nlm_denied_grace_period = 4,
	nlm_deadlck = 5,
};
typedef enum nlm_stats nlm_stats;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_stats(XDR *, nlm_stats*);
#elif __STDC__
extern  bool_t xdr_nlm_stats(XDR *, nlm_stats*);
#else /* Old Style C */
bool_t xdr_nlm_stats();
#endif /* Old Style C */


struct nlm_holder {
	bool_t exclusive;
	int svid;
	netobj oh;
	u_int l_offset;
	u_int l_len;
};
typedef struct nlm_holder nlm_holder;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_holder(XDR *, nlm_holder*);
#elif __STDC__
extern  bool_t xdr_nlm_holder(XDR *, nlm_holder*);
#else /* Old Style C */
bool_t xdr_nlm_holder();
#endif /* Old Style C */


struct nlm_testrply {
	nlm_stats stat;
	union {
		struct nlm_holder holder;
	} nlm_testrply_u;
};
typedef struct nlm_testrply nlm_testrply;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_testrply(XDR *, nlm_testrply*);
#elif __STDC__
extern  bool_t xdr_nlm_testrply(XDR *, nlm_testrply*);
#else /* Old Style C */
bool_t xdr_nlm_testrply();
#endif /* Old Style C */


struct nlm_stat {
	nlm_stats stat;
};
typedef struct nlm_stat nlm_stat;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_stat(XDR *, nlm_stat*);
#elif __STDC__
extern  bool_t xdr_nlm_stat(XDR *, nlm_stat*);
#else /* Old Style C */
bool_t xdr_nlm_stat();
#endif /* Old Style C */


struct nlm_res {
	netobj cookie;
	nlm_stat stat;
};
typedef struct nlm_res nlm_res;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_res(XDR *, nlm_res*);
#elif __STDC__
extern  bool_t xdr_nlm_res(XDR *, nlm_res*);
#else /* Old Style C */
bool_t xdr_nlm_res();
#endif /* Old Style C */


struct nlm_testres {
	netobj cookie;
	nlm_testrply stat;
};
typedef struct nlm_testres nlm_testres;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_testres(XDR *, nlm_testres*);
#elif __STDC__
extern  bool_t xdr_nlm_testres(XDR *, nlm_testres*);
#else /* Old Style C */
bool_t xdr_nlm_testres();
#endif /* Old Style C */


struct nlm_lock {
	char *caller_name;
	netobj fh;
	netobj oh;
	int svid;
	u_int l_offset;
	u_int l_len;
};
typedef struct nlm_lock nlm_lock;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_lock(XDR *, nlm_lock*);
#elif __STDC__
extern  bool_t xdr_nlm_lock(XDR *, nlm_lock*);
#else /* Old Style C */
bool_t xdr_nlm_lock();
#endif /* Old Style C */


struct nlm_lockargs {
	netobj cookie;
	bool_t block;
	bool_t exclusive;
	struct nlm_lock alock;
	bool_t reclaim;
	int state;
};
typedef struct nlm_lockargs nlm_lockargs;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_lockargs(XDR *, nlm_lockargs*);
#elif __STDC__
extern  bool_t xdr_nlm_lockargs(XDR *, nlm_lockargs*);
#else /* Old Style C */
bool_t xdr_nlm_lockargs();
#endif /* Old Style C */


struct nlm_cancargs {
	netobj cookie;
	bool_t block;
	bool_t exclusive;
	struct nlm_lock alock;
};
typedef struct nlm_cancargs nlm_cancargs;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_cancargs(XDR *, nlm_cancargs*);
#elif __STDC__
extern  bool_t xdr_nlm_cancargs(XDR *, nlm_cancargs*);
#else /* Old Style C */
bool_t xdr_nlm_cancargs();
#endif /* Old Style C */


struct nlm_testargs {
	netobj cookie;
	bool_t exclusive;
	struct nlm_lock alock;
};
typedef struct nlm_testargs nlm_testargs;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_testargs(XDR *, nlm_testargs*);
#elif __STDC__
extern  bool_t xdr_nlm_testargs(XDR *, nlm_testargs*);
#else /* Old Style C */
bool_t xdr_nlm_testargs();
#endif /* Old Style C */


struct nlm_unlockargs {
	netobj cookie;
	struct nlm_lock alock;
};
typedef struct nlm_unlockargs nlm_unlockargs;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_unlockargs(XDR *, nlm_unlockargs*);
#elif __STDC__
extern  bool_t xdr_nlm_unlockargs(XDR *, nlm_unlockargs*);
#else /* Old Style C */
bool_t xdr_nlm_unlockargs();
#endif /* Old Style C */

/*
 * The following enums are actually bit encoded for efficient
 * boolean algebra.... DON'T change them.....
 */

enum fsh_mode {
	fsm_DN = 0,
	fsm_DR = 1,
	fsm_DW = 2,
	fsm_DRW = 3,
};
typedef enum fsh_mode fsh_mode;
#ifdef __cplusplus
extern "C" bool_t xdr_fsh_mode(XDR *, fsh_mode*);
#elif __STDC__
extern  bool_t xdr_fsh_mode(XDR *, fsh_mode*);
#else /* Old Style C */
bool_t xdr_fsh_mode();
#endif /* Old Style C */


enum fsh_access {
	fsa_NONE = 0,
	fsa_R = 1,
	fsa_W = 2,
	fsa_RW = 3,
};
typedef enum fsh_access fsh_access;
#ifdef __cplusplus
extern "C" bool_t xdr_fsh_access(XDR *, fsh_access*);
#elif __STDC__
extern  bool_t xdr_fsh_access(XDR *, fsh_access*);
#else /* Old Style C */
bool_t xdr_fsh_access();
#endif /* Old Style C */


struct nlm_share {
	char *caller_name;
	netobj fh;
	netobj oh;
	fsh_mode mode;
	fsh_access access;
};
typedef struct nlm_share nlm_share;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_share(XDR *, nlm_share*);
#elif __STDC__
extern  bool_t xdr_nlm_share(XDR *, nlm_share*);
#else /* Old Style C */
bool_t xdr_nlm_share();
#endif /* Old Style C */


struct nlm_shareargs {
	netobj cookie;
	nlm_share share;
	bool_t reclaim;
};
typedef struct nlm_shareargs nlm_shareargs;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_shareargs(XDR *, nlm_shareargs*);
#elif __STDC__
extern  bool_t xdr_nlm_shareargs(XDR *, nlm_shareargs*);
#else /* Old Style C */
bool_t xdr_nlm_shareargs();
#endif /* Old Style C */


struct nlm_shareres {
	netobj cookie;
	nlm_stats stat;
	int sequence;
};
typedef struct nlm_shareres nlm_shareres;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_shareres(XDR *, nlm_shareres*);
#elif __STDC__
extern  bool_t xdr_nlm_shareres(XDR *, nlm_shareres*);
#else /* Old Style C */
bool_t xdr_nlm_shareres();
#endif /* Old Style C */


struct nlm_notify {
	char *name;
	rpc_int state;
};
typedef struct nlm_notify nlm_notify;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_notify(XDR *, nlm_notify*);
#elif __STDC__
extern  bool_t xdr_nlm_notify(XDR *, nlm_notify*);
#else /* Old Style C */
bool_t xdr_nlm_notify();
#endif /* Old Style C */

/* definitions for NLM version 4 */

enum nlm4_stats {
	nlm4_granted = 0,
	nlm4_denied = 1,
	nlm4_denied_nolocks = 2,
	nlm4_blocked = 3,
	nlm4_denied_grace_period = 4,
	nlm4_deadlck = 5,
	nlm4_rofs = 6,
	nlm4_stale_fh = 7,
	nlm4_fbig = 8,
	nlm4_failed = 9,
};
typedef enum nlm4_stats nlm4_stats;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_stats(XDR *, nlm4_stats*);
#elif __STDC__
extern  bool_t xdr_nlm4_stats(XDR *, nlm4_stats*);
#else /* Old Style C */
bool_t xdr_nlm4_stats();
#endif /* Old Style C */


struct nlm4_stat {
	nlm4_stats stat;
};
typedef struct nlm4_stat nlm4_stat;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_stat(XDR *, nlm4_stat*);
#elif __STDC__
extern  bool_t xdr_nlm4_stat(XDR *, nlm4_stat*);
#else /* Old Style C */
bool_t xdr_nlm4_stat();
#endif /* Old Style C */


struct nlm4_holder {
	bool_t exclusive;
	u_int32_t svid;
	netobj oh;
	u_int64_t l_offset;
	u_int64_t l_len;
};
typedef struct nlm4_holder nlm4_holder;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_holder(XDR *, nlm4_holder*);
#elif __STDC__
extern  bool_t xdr_nlm4_holder(XDR *, nlm4_holder*);
#else /* Old Style C */
bool_t xdr_nlm4_holder();
#endif /* Old Style C */


struct nlm4_lock {
	char *caller_name;
	netobj fh;
	netobj oh;
	u_int32_t svid;
	u_int64_t l_offset;
	u_int64_t l_len;
};
typedef struct nlm4_lock nlm4_lock;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_lock(XDR *, nlm4_lock*);
#elif __STDC__
extern  bool_t xdr_nlm4_lock(XDR *, nlm4_lock*);
#else /* Old Style C */
bool_t xdr_nlm4_lock();
#endif /* Old Style C */


struct nlm4_share {
	char *caller_name;
	netobj fh;
	netobj oh;
	fsh_mode mode;
	fsh_access access;
};
typedef struct nlm4_share nlm4_share;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_share(XDR *, nlm4_share*);
#elif __STDC__
extern  bool_t xdr_nlm4_share(XDR *, nlm4_share*);
#else /* Old Style C */
bool_t xdr_nlm4_share();
#endif /* Old Style C */


struct nlm4_testrply {
	nlm4_stats stat;
	union {
		struct nlm4_holder holder;
	} nlm4_testrply_u;
};
typedef struct nlm4_testrply nlm4_testrply;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_testrply(XDR *, nlm4_testrply*);
#elif __STDC__
extern  bool_t xdr_nlm4_testrply(XDR *, nlm4_testrply*);
#else /* Old Style C */
bool_t xdr_nlm4_testrply();
#endif /* Old Style C */


struct nlm4_testres {
	netobj cookie;
	nlm4_testrply stat;
};
typedef struct nlm4_testres nlm4_testres;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_testres(XDR *, nlm4_testres*);
#elif __STDC__
extern  bool_t xdr_nlm4_testres(XDR *, nlm4_testres*);
#else /* Old Style C */
bool_t xdr_nlm4_testres();
#endif /* Old Style C */


struct nlm4_testargs {
	netobj cookie;
	bool_t exclusive;
	struct nlm4_lock alock;
};
typedef struct nlm4_testargs nlm4_testargs;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_testargs(XDR *, nlm4_testargs*);
#elif __STDC__
extern  bool_t xdr_nlm4_testargs(XDR *, nlm4_testargs*);
#else /* Old Style C */
bool_t xdr_nlm4_testargs();
#endif /* Old Style C */


struct nlm4_res {
	netobj cookie;
	nlm4_stat stat;
};
typedef struct nlm4_res nlm4_res;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_res(XDR *, nlm4_res*);
#elif __STDC__
extern  bool_t xdr_nlm4_res(XDR *, nlm4_res*);
#else /* Old Style C */
bool_t xdr_nlm4_res();
#endif /* Old Style C */


struct nlm4_lockargs {
	netobj cookie;
	bool_t block;
	bool_t exclusive;
	struct nlm4_lock alock;
	bool_t reclaim;
	int state;
};
typedef struct nlm4_lockargs nlm4_lockargs;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_lockargs(XDR *, nlm4_lockargs*);
#elif __STDC__
extern  bool_t xdr_nlm4_lockargs(XDR *, nlm4_lockargs*);
#else /* Old Style C */
bool_t xdr_nlm4_lockargs();
#endif /* Old Style C */


struct nlm4_cancargs {
	netobj cookie;
	bool_t block;
	bool_t exclusive;
	struct nlm4_lock alock;
};
typedef struct nlm4_cancargs nlm4_cancargs;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_cancargs(XDR *, nlm4_cancargs*);
#elif __STDC__
extern  bool_t xdr_nlm4_cancargs(XDR *, nlm4_cancargs*);
#else /* Old Style C */
bool_t xdr_nlm4_cancargs();
#endif /* Old Style C */


struct nlm4_unlockargs {
	netobj cookie;
	struct nlm4_lock alock;
};
typedef struct nlm4_unlockargs nlm4_unlockargs;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_unlockargs(XDR *, nlm4_unlockargs*);
#elif __STDC__
extern  bool_t xdr_nlm4_unlockargs(XDR *, nlm4_unlockargs*);
#else /* Old Style C */
bool_t xdr_nlm4_unlockargs();
#endif /* Old Style C */


struct nlm4_shareargs {
	netobj cookie;
	nlm4_share share;
	bool_t reclaim;
};
typedef struct nlm4_shareargs nlm4_shareargs;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_shareargs(XDR *, nlm4_shareargs*);
#elif __STDC__
extern  bool_t xdr_nlm4_shareargs(XDR *, nlm4_shareargs*);
#else /* Old Style C */
bool_t xdr_nlm4_shareargs();
#endif /* Old Style C */


struct nlm4_shareres {
	netobj cookie;
	nlm4_stats stat;
	int sequence;
};
typedef struct nlm4_shareres nlm4_shareres;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_shareres(XDR *, nlm4_shareres*);
#elif __STDC__
extern  bool_t xdr_nlm4_shareres(XDR *, nlm4_shareres*);
#else /* Old Style C */
bool_t xdr_nlm4_shareres();
#endif /* Old Style C */


struct nlm_sm_status {
	char *mon_name;
	int state;
	char priv[16];
};
typedef struct nlm_sm_status nlm_sm_status;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm_sm_status(XDR *, nlm_sm_status*);
#elif __STDC__
extern  bool_t xdr_nlm_sm_status(XDR *, nlm_sm_status*);
#else /* Old Style C */
bool_t xdr_nlm_sm_status();
#endif /* Old Style C */


struct nlm4_notify {
	char *name;
	int32_t state;
};
typedef struct nlm4_notify nlm4_notify;
#ifdef __cplusplus
extern "C" bool_t xdr_nlm4_notify(XDR *, nlm4_notify*);
#elif __STDC__
extern  bool_t xdr_nlm4_notify(XDR *, nlm4_notify*);
#else /* Old Style C */
bool_t xdr_nlm4_notify();
#endif /* Old Style C */


#define NLM_PROG ((rpc_uint)100021)
#define NLM_SM ((rpc_uint)0)

#ifdef __cplusplus
#define NLM_SM_NOTIFY ((rpc_uint)1)
extern "C" void * nlm_sm_notify_0(struct nlm_sm_status *, CLIENT *);
extern "C" void * nlm_sm_notify_0_svc(struct nlm_sm_status *, struct svc_req *);

#elif __STDC__
#define NLM_SM_NOTIFY ((rpc_uint)1)
extern  void * nlm_sm_notify_0(struct nlm_sm_status *, CLIENT *);
extern  void * nlm_sm_notify_0_svc(struct nlm_sm_status *, struct svc_req *);

#else /* Old Style C */
#define NLM_SM_NOTIFY ((rpc_uint)1)
extern  void * nlm_sm_notify_0();
extern  void * nlm_sm_notify_0_svc();
#endif /* Old Style C */
#define NLM_VERS ((rpc_uint)1)

#ifdef __cplusplus
#define NLM_TEST ((rpc_uint)1)
extern "C" nlm_testres * nlm_test_1(struct nlm_testargs *, CLIENT *);
extern "C" nlm_testres * nlm_test_1_svc(struct nlm_testargs *, struct svc_req *);
#define NLM_LOCK ((rpc_uint)2)
extern "C" nlm_res * nlm_lock_1(struct nlm_lockargs *, CLIENT *);
extern "C" nlm_res * nlm_lock_1_svc(struct nlm_lockargs *, struct svc_req *);
#define NLM_CANCEL ((rpc_uint)3)
extern "C" nlm_res * nlm_cancel_1(struct nlm_cancargs *, CLIENT *);
extern "C" nlm_res * nlm_cancel_1_svc(struct nlm_cancargs *, struct svc_req *);
#define NLM_UNLOCK ((rpc_uint)4)
extern "C" nlm_res * nlm_unlock_1(struct nlm_unlockargs *, CLIENT *);
extern "C" nlm_res * nlm_unlock_1_svc(struct nlm_unlockargs *, struct svc_req *);
#define NLM_GRANTED ((rpc_uint)5)
extern "C" nlm_res * nlm_granted_1(struct nlm_testargs *, CLIENT *);
extern "C" nlm_res * nlm_granted_1_svc(struct nlm_testargs *, struct svc_req *);
#define NLM_TEST_MSG ((rpc_uint)6)
extern "C" void * nlm_test_msg_1(struct nlm_testargs *, CLIENT *);
extern "C" void * nlm_test_msg_1_svc(struct nlm_testargs *, struct svc_req *);
#define NLM_LOCK_MSG ((rpc_uint)7)
extern "C" void * nlm_lock_msg_1(struct nlm_lockargs *, CLIENT *);
extern "C" void * nlm_lock_msg_1_svc(struct nlm_lockargs *, struct svc_req *);
#define NLM_CANCEL_MSG ((rpc_uint)8)
extern "C" void * nlm_cancel_msg_1(struct nlm_cancargs *, CLIENT *);
extern "C" void * nlm_cancel_msg_1_svc(struct nlm_cancargs *, struct svc_req *);
#define NLM_UNLOCK_MSG ((rpc_uint)9)
extern "C" void * nlm_unlock_msg_1(struct nlm_unlockargs *, CLIENT *);
extern "C" void * nlm_unlock_msg_1_svc(struct nlm_unlockargs *, struct svc_req *);
#define NLM_GRANTED_MSG ((rpc_uint)10)
extern "C" void * nlm_granted_msg_1(struct nlm_testargs *, CLIENT *);
extern "C" void * nlm_granted_msg_1_svc(struct nlm_testargs *, struct svc_req *);
#define NLM_TEST_RES ((rpc_uint)11)
extern "C" void * nlm_test_res_1(nlm_testres *, CLIENT *);
extern "C" void * nlm_test_res_1_svc(nlm_testres *, struct svc_req *);
#define NLM_LOCK_RES ((rpc_uint)12)
extern "C" void * nlm_lock_res_1(nlm_res *, CLIENT *);
extern "C" void * nlm_lock_res_1_svc(nlm_res *, struct svc_req *);
#define NLM_CANCEL_RES ((rpc_uint)13)
extern "C" void * nlm_cancel_res_1(nlm_res *, CLIENT *);
extern "C" void * nlm_cancel_res_1_svc(nlm_res *, struct svc_req *);
#define NLM_UNLOCK_RES ((rpc_uint)14)
extern "C" void * nlm_unlock_res_1(nlm_res *, CLIENT *);
extern "C" void * nlm_unlock_res_1_svc(nlm_res *, struct svc_req *);
#define NLM_GRANTED_RES ((rpc_uint)15)
extern "C" void * nlm_granted_res_1(nlm_res *, CLIENT *);
extern "C" void * nlm_granted_res_1_svc(nlm_res *, struct svc_req *);

#elif __STDC__
#define NLM_TEST ((rpc_uint)1)
extern  nlm_testres * nlm_test_1(struct nlm_testargs *, CLIENT *);
extern  nlm_testres * nlm_test_1_svc(struct nlm_testargs *, struct svc_req *);
#define NLM_LOCK ((rpc_uint)2)
extern  nlm_res * nlm_lock_1(struct nlm_lockargs *, CLIENT *);
extern  nlm_res * nlm_lock_1_svc(struct nlm_lockargs *, struct svc_req *);
#define NLM_CANCEL ((rpc_uint)3)
extern  nlm_res * nlm_cancel_1(struct nlm_cancargs *, CLIENT *);
extern  nlm_res * nlm_cancel_1_svc(struct nlm_cancargs *, struct svc_req *);
#define NLM_UNLOCK ((rpc_uint)4)
extern  nlm_res * nlm_unlock_1(struct nlm_unlockargs *, CLIENT *);
extern  nlm_res * nlm_unlock_1_svc(struct nlm_unlockargs *, struct svc_req *);
#define NLM_GRANTED ((rpc_uint)5)
extern  nlm_res * nlm_granted_1(struct nlm_testargs *, CLIENT *);
extern  nlm_res * nlm_granted_1_svc(struct nlm_testargs *, struct svc_req *);
#define NLM_TEST_MSG ((rpc_uint)6)
extern  void * nlm_test_msg_1(struct nlm_testargs *, CLIENT *);
extern  void * nlm_test_msg_1_svc(struct nlm_testargs *, struct svc_req *);
#define NLM_LOCK_MSG ((rpc_uint)7)
extern  void * nlm_lock_msg_1(struct nlm_lockargs *, CLIENT *);
extern  void * nlm_lock_msg_1_svc(struct nlm_lockargs *, struct svc_req *);
#define NLM_CANCEL_MSG ((rpc_uint)8)
extern  void * nlm_cancel_msg_1(struct nlm_cancargs *, CLIENT *);
extern  void * nlm_cancel_msg_1_svc(struct nlm_cancargs *, struct svc_req *);
#define NLM_UNLOCK_MSG ((rpc_uint)9)
extern  void * nlm_unlock_msg_1(struct nlm_unlockargs *, CLIENT *);
extern  void * nlm_unlock_msg_1_svc(struct nlm_unlockargs *, struct svc_req *);
#define NLM_GRANTED_MSG ((rpc_uint)10)
extern  void * nlm_granted_msg_1(struct nlm_testargs *, CLIENT *);
extern  void * nlm_granted_msg_1_svc(struct nlm_testargs *, struct svc_req *);
#define NLM_TEST_RES ((rpc_uint)11)
extern  void * nlm_test_res_1(nlm_testres *, CLIENT *);
extern  void * nlm_test_res_1_svc(nlm_testres *, struct svc_req *);
#define NLM_LOCK_RES ((rpc_uint)12)
extern  void * nlm_lock_res_1(nlm_res *, CLIENT *);
extern  void * nlm_lock_res_1_svc(nlm_res *, struct svc_req *);
#define NLM_CANCEL_RES ((rpc_uint)13)
extern  void * nlm_cancel_res_1(nlm_res *, CLIENT *);
extern  void * nlm_cancel_res_1_svc(nlm_res *, struct svc_req *);
#define NLM_UNLOCK_RES ((rpc_uint)14)
extern  void * nlm_unlock_res_1(nlm_res *, CLIENT *);
extern  void * nlm_unlock_res_1_svc(nlm_res *, struct svc_req *);
#define NLM_GRANTED_RES ((rpc_uint)15)
extern  void * nlm_granted_res_1(nlm_res *, CLIENT *);
extern  void * nlm_granted_res_1_svc(nlm_res *, struct svc_req *);

#else /* Old Style C */
#define NLM_TEST ((rpc_uint)1)
extern  nlm_testres * nlm_test_1();
extern  nlm_testres * nlm_test_1_svc();
#define NLM_LOCK ((rpc_uint)2)
extern  nlm_res * nlm_lock_1();
extern  nlm_res * nlm_lock_1_svc();
#define NLM_CANCEL ((rpc_uint)3)
extern  nlm_res * nlm_cancel_1();
extern  nlm_res * nlm_cancel_1_svc();
#define NLM_UNLOCK ((rpc_uint)4)
extern  nlm_res * nlm_unlock_1();
extern  nlm_res * nlm_unlock_1_svc();
#define NLM_GRANTED ((rpc_uint)5)
extern  nlm_res * nlm_granted_1();
extern  nlm_res * nlm_granted_1_svc();
#define NLM_TEST_MSG ((rpc_uint)6)
extern  void * nlm_test_msg_1();
extern  void * nlm_test_msg_1_svc();
#define NLM_LOCK_MSG ((rpc_uint)7)
extern  void * nlm_lock_msg_1();
extern  void * nlm_lock_msg_1_svc();
#define NLM_CANCEL_MSG ((rpc_uint)8)
extern  void * nlm_cancel_msg_1();
extern  void * nlm_cancel_msg_1_svc();
#define NLM_UNLOCK_MSG ((rpc_uint)9)
extern  void * nlm_unlock_msg_1();
extern  void * nlm_unlock_msg_1_svc();
#define NLM_GRANTED_MSG ((rpc_uint)10)
extern  void * nlm_granted_msg_1();
extern  void * nlm_granted_msg_1_svc();
#define NLM_TEST_RES ((rpc_uint)11)
extern  void * nlm_test_res_1();
extern  void * nlm_test_res_1_svc();
#define NLM_LOCK_RES ((rpc_uint)12)
extern  void * nlm_lock_res_1();
extern  void * nlm_lock_res_1_svc();
#define NLM_CANCEL_RES ((rpc_uint)13)
extern  void * nlm_cancel_res_1();
extern  void * nlm_cancel_res_1_svc();
#define NLM_UNLOCK_RES ((rpc_uint)14)
extern  void * nlm_unlock_res_1();
extern  void * nlm_unlock_res_1_svc();
#define NLM_GRANTED_RES ((rpc_uint)15)
extern  void * nlm_granted_res_1();
extern  void * nlm_granted_res_1_svc();
#endif /* Old Style C */
#define NLM_VERSX ((rpc_uint)3)

#ifdef __cplusplus
extern "C" nlm_testres * nlm_test_3(struct nlm_testargs *, CLIENT *);
extern "C" nlm_testres * nlm_test_3_svc(struct nlm_testargs *, struct svc_req *);
extern "C" nlm_res * nlm_lock_3(struct nlm_lockargs *, CLIENT *);
extern "C" nlm_res * nlm_lock_3_svc(struct nlm_lockargs *, struct svc_req *);
extern "C" nlm_res * nlm_cancel_3(struct nlm_cancargs *, CLIENT *);
extern "C" nlm_res * nlm_cancel_3_svc(struct nlm_cancargs *, struct svc_req *);
extern "C" nlm_res * nlm_unlock_3(struct nlm_unlockargs *, CLIENT *);
extern "C" nlm_res * nlm_unlock_3_svc(struct nlm_unlockargs *, struct svc_req *);
extern "C" nlm_res * nlm_granted_3(struct nlm_testargs *, CLIENT *);
extern "C" nlm_res * nlm_granted_3_svc(struct nlm_testargs *, struct svc_req *);
extern "C" void * nlm_test_msg_3(struct nlm_testargs *, CLIENT *);
extern "C" void * nlm_test_msg_3_svc(struct nlm_testargs *, struct svc_req *);
extern "C" void * nlm_lock_msg_3(struct nlm_lockargs *, CLIENT *);
extern "C" void * nlm_lock_msg_3_svc(struct nlm_lockargs *, struct svc_req *);
extern "C" void * nlm_cancel_msg_3(struct nlm_cancargs *, CLIENT *);
extern "C" void * nlm_cancel_msg_3_svc(struct nlm_cancargs *, struct svc_req *);
extern "C" void * nlm_unlock_msg_3(struct nlm_unlockargs *, CLIENT *);
extern "C" void * nlm_unlock_msg_3_svc(struct nlm_unlockargs *, struct svc_req *);
extern "C" void * nlm_granted_msg_3(struct nlm_testargs *, CLIENT *);
extern "C" void * nlm_granted_msg_3_svc(struct nlm_testargs *, struct svc_req *);
extern "C" void * nlm_test_res_3(nlm_testres *, CLIENT *);
extern "C" void * nlm_test_res_3_svc(nlm_testres *, struct svc_req *);
extern "C" void * nlm_lock_res_3(nlm_res *, CLIENT *);
extern "C" void * nlm_lock_res_3_svc(nlm_res *, struct svc_req *);
extern "C" void * nlm_cancel_res_3(nlm_res *, CLIENT *);
extern "C" void * nlm_cancel_res_3_svc(nlm_res *, struct svc_req *);
extern "C" void * nlm_unlock_res_3(nlm_res *, CLIENT *);
extern "C" void * nlm_unlock_res_3_svc(nlm_res *, struct svc_req *);
extern "C" void * nlm_granted_res_3(nlm_res *, CLIENT *);
extern "C" void * nlm_granted_res_3_svc(nlm_res *, struct svc_req *);
#define NLM_SHARE ((rpc_uint)20)
extern "C" nlm_shareres * nlm_share_3(nlm_shareargs *, CLIENT *);
extern "C" nlm_shareres * nlm_share_3_svc(nlm_shareargs *, struct svc_req *);
#define NLM_UNSHARE ((rpc_uint)21)
extern "C" nlm_shareres * nlm_unshare_3(nlm_shareargs *, CLIENT *);
extern "C" nlm_shareres * nlm_unshare_3_svc(nlm_shareargs *, struct svc_req *);
#define NLM_NM_LOCK ((rpc_uint)22)
extern "C" nlm_res * nlm_nm_lock_3(nlm_lockargs *, CLIENT *);
extern "C" nlm_res * nlm_nm_lock_3_svc(nlm_lockargs *, struct svc_req *);
#define NLM_FREE_ALL ((rpc_uint)23)
extern "C" void * nlm_free_all_3(nlm_notify *, CLIENT *);
extern "C" void * nlm_free_all_3_svc(nlm_notify *, struct svc_req *);

#elif __STDC__
extern  nlm_testres * nlm_test_3(struct nlm_testargs *, CLIENT *);
extern  nlm_testres * nlm_test_3_svc(struct nlm_testargs *, struct svc_req *);
extern  nlm_res * nlm_lock_3(struct nlm_lockargs *, CLIENT *);
extern  nlm_res * nlm_lock_3_svc(struct nlm_lockargs *, struct svc_req *);
extern  nlm_res * nlm_cancel_3(struct nlm_cancargs *, CLIENT *);
extern  nlm_res * nlm_cancel_3_svc(struct nlm_cancargs *, struct svc_req *);
extern  nlm_res * nlm_unlock_3(struct nlm_unlockargs *, CLIENT *);
extern  nlm_res * nlm_unlock_3_svc(struct nlm_unlockargs *, struct svc_req *);
extern  nlm_res * nlm_granted_3(struct nlm_testargs *, CLIENT *);
extern  nlm_res * nlm_granted_3_svc(struct nlm_testargs *, struct svc_req *);
extern  void * nlm_test_msg_3(struct nlm_testargs *, CLIENT *);
extern  void * nlm_test_msg_3_svc(struct nlm_testargs *, struct svc_req *);
extern  void * nlm_lock_msg_3(struct nlm_lockargs *, CLIENT *);
extern  void * nlm_lock_msg_3_svc(struct nlm_lockargs *, struct svc_req *);
extern  void * nlm_cancel_msg_3(struct nlm_cancargs *, CLIENT *);
extern  void * nlm_cancel_msg_3_svc(struct nlm_cancargs *, struct svc_req *);
extern  void * nlm_unlock_msg_3(struct nlm_unlockargs *, CLIENT *);
extern  void * nlm_unlock_msg_3_svc(struct nlm_unlockargs *, struct svc_req *);
extern  void * nlm_granted_msg_3(struct nlm_testargs *, CLIENT *);
extern  void * nlm_granted_msg_3_svc(struct nlm_testargs *, struct svc_req *);
extern  void * nlm_test_res_3(nlm_testres *, CLIENT *);
extern  void * nlm_test_res_3_svc(nlm_testres *, struct svc_req *);
extern  void * nlm_lock_res_3(nlm_res *, CLIENT *);
extern  void * nlm_lock_res_3_svc(nlm_res *, struct svc_req *);
extern  void * nlm_cancel_res_3(nlm_res *, CLIENT *);
extern  void * nlm_cancel_res_3_svc(nlm_res *, struct svc_req *);
extern  void * nlm_unlock_res_3(nlm_res *, CLIENT *);
extern  void * nlm_unlock_res_3_svc(nlm_res *, struct svc_req *);
extern  void * nlm_granted_res_3(nlm_res *, CLIENT *);
extern  void * nlm_granted_res_3_svc(nlm_res *, struct svc_req *);
#define NLM_SHARE ((rpc_uint)20)
extern  nlm_shareres * nlm_share_3(nlm_shareargs *, CLIENT *);
extern  nlm_shareres * nlm_share_3_svc(nlm_shareargs *, struct svc_req *);
#define NLM_UNSHARE ((rpc_uint)21)
extern  nlm_shareres * nlm_unshare_3(nlm_shareargs *, CLIENT *);
extern  nlm_shareres * nlm_unshare_3_svc(nlm_shareargs *, struct svc_req *);
#define NLM_NM_LOCK ((rpc_uint)22)
extern  nlm_res * nlm_nm_lock_3(nlm_lockargs *, CLIENT *);
extern  nlm_res * nlm_nm_lock_3_svc(nlm_lockargs *, struct svc_req *);
#define NLM_FREE_ALL ((rpc_uint)23)
extern  void * nlm_free_all_3(nlm_notify *, CLIENT *);
extern  void * nlm_free_all_3_svc(nlm_notify *, struct svc_req *);

#else /* Old Style C */
extern  nlm_testres * nlm_test_3();
extern  nlm_testres * nlm_test_3_svc();
extern  nlm_res * nlm_lock_3();
extern  nlm_res * nlm_lock_3_svc();
extern  nlm_res * nlm_cancel_3();
extern  nlm_res * nlm_cancel_3_svc();
extern  nlm_res * nlm_unlock_3();
extern  nlm_res * nlm_unlock_3_svc();
extern  nlm_res * nlm_granted_3();
extern  nlm_res * nlm_granted_3_svc();
extern  void * nlm_test_msg_3();
extern  void * nlm_test_msg_3_svc();
extern  void * nlm_lock_msg_3();
extern  void * nlm_lock_msg_3_svc();
extern  void * nlm_cancel_msg_3();
extern  void * nlm_cancel_msg_3_svc();
extern  void * nlm_unlock_msg_3();
extern  void * nlm_unlock_msg_3_svc();
extern  void * nlm_granted_msg_3();
extern  void * nlm_granted_msg_3_svc();
extern  void * nlm_test_res_3();
extern  void * nlm_test_res_3_svc();
extern  void * nlm_lock_res_3();
extern  void * nlm_lock_res_3_svc();
extern  void * nlm_cancel_res_3();
extern  void * nlm_cancel_res_3_svc();
extern  void * nlm_unlock_res_3();
extern  void * nlm_unlock_res_3_svc();
extern  void * nlm_granted_res_3();
extern  void * nlm_granted_res_3_svc();
#define NLM_SHARE ((rpc_uint)20)
extern  nlm_shareres * nlm_share_3();
extern  nlm_shareres * nlm_share_3_svc();
#define NLM_UNSHARE ((rpc_uint)21)
extern  nlm_shareres * nlm_unshare_3();
extern  nlm_shareres * nlm_unshare_3_svc();
#define NLM_NM_LOCK ((rpc_uint)22)
extern  nlm_res * nlm_nm_lock_3();
extern  nlm_res * nlm_nm_lock_3_svc();
#define NLM_FREE_ALL ((rpc_uint)23)
extern  void * nlm_free_all_3();
extern  void * nlm_free_all_3_svc();
#endif /* Old Style C */
#define NLM_VERS4 ((rpc_uint)4)

#ifdef __cplusplus
#define NLM4_TEST ((rpc_uint)1)
extern "C" nlm4_testres * nlm4_test_4(nlm4_testargs *, CLIENT *);
extern "C" nlm4_testres * nlm4_test_4_svc(nlm4_testargs *, struct svc_req *);
#define NLM4_LOCK ((rpc_uint)2)
extern "C" nlm4_res * nlm4_lock_4(nlm4_lockargs *, CLIENT *);
extern "C" nlm4_res * nlm4_lock_4_svc(nlm4_lockargs *, struct svc_req *);
#define NLM4_CANCEL ((rpc_uint)3)
extern "C" nlm4_res * nlm4_cancel_4(nlm4_cancargs *, CLIENT *);
extern "C" nlm4_res * nlm4_cancel_4_svc(nlm4_cancargs *, struct svc_req *);
#define NLM4_UNLOCK ((rpc_uint)4)
extern "C" nlm4_res * nlm4_unlock_4(nlm4_unlockargs *, CLIENT *);
extern "C" nlm4_res * nlm4_unlock_4_svc(nlm4_unlockargs *, struct svc_req *);
#define NLM4_GRANTED ((rpc_uint)5)
extern "C" nlm4_res * nlm4_granted_4(nlm4_testargs *, CLIENT *);
extern "C" nlm4_res * nlm4_granted_4_svc(nlm4_testargs *, struct svc_req *);
#define NLM4_TEST_MSG ((rpc_uint)6)
extern "C" void * nlm4_test_msg_4(nlm4_testargs *, CLIENT *);
extern "C" void * nlm4_test_msg_4_svc(nlm4_testargs *, struct svc_req *);
#define NLM4_LOCK_MSG ((rpc_uint)7)
extern "C" void * nlm4_lock_msg_4(nlm4_lockargs *, CLIENT *);
extern "C" void * nlm4_lock_msg_4_svc(nlm4_lockargs *, struct svc_req *);
#define NLM4_CANCEL_MSG ((rpc_uint)8)
extern "C" void * nlm4_cancel_msg_4(nlm4_cancargs *, CLIENT *);
extern "C" void * nlm4_cancel_msg_4_svc(nlm4_cancargs *, struct svc_req *);
#define NLM4_UNLOCK_MSG ((rpc_uint)9)
extern "C" void * nlm4_unlock_msg_4(nlm4_unlockargs *, CLIENT *);
extern "C" void * nlm4_unlock_msg_4_svc(nlm4_unlockargs *, struct svc_req *);
#define NLM4_GRANTED_MSG ((rpc_uint)10)
extern "C" void * nlm4_granted_msg_4(nlm4_testargs *, CLIENT *);
extern "C" void * nlm4_granted_msg_4_svc(nlm4_testargs *, struct svc_req *);
#define NLM4_TEST_RES ((rpc_uint)11)
extern "C" void * nlm4_test_res_4(nlm4_testres *, CLIENT *);
extern "C" void * nlm4_test_res_4_svc(nlm4_testres *, struct svc_req *);
#define NLM4_LOCK_RES ((rpc_uint)12)
extern "C" void * nlm4_lock_res_4(nlm4_res *, CLIENT *);
extern "C" void * nlm4_lock_res_4_svc(nlm4_res *, struct svc_req *);
#define NLM4_CANCEL_RES ((rpc_uint)13)
extern "C" void * nlm4_cancel_res_4(nlm4_res *, CLIENT *);
extern "C" void * nlm4_cancel_res_4_svc(nlm4_res *, struct svc_req *);
#define NLM4_UNLOCK_RES ((rpc_uint)14)
extern "C" void * nlm4_unlock_res_4(nlm4_res *, CLIENT *);
extern "C" void * nlm4_unlock_res_4_svc(nlm4_res *, struct svc_req *);
#define NLM4_GRANTED_RES ((rpc_uint)15)
extern "C" void * nlm4_granted_res_4(nlm4_res *, CLIENT *);
extern "C" void * nlm4_granted_res_4_svc(nlm4_res *, struct svc_req *);
#define NLM4_SHARE ((rpc_uint)20)
extern "C" nlm4_shareres * nlm4_share_4(nlm4_shareargs *, CLIENT *);
extern "C" nlm4_shareres * nlm4_share_4_svc(nlm4_shareargs *, struct svc_req *);
#define NLM4_UNSHARE ((rpc_uint)21)
extern "C" nlm4_shareres * nlm4_unshare_4(nlm4_shareargs *, CLIENT *);
extern "C" nlm4_shareres * nlm4_unshare_4_svc(nlm4_shareargs *, struct svc_req *);
#define NLM4_NM_LOCK ((rpc_uint)22)
extern "C" nlm4_res * nlm4_nm_lock_4(nlm4_lockargs *, CLIENT *);
extern "C" nlm4_res * nlm4_nm_lock_4_svc(nlm4_lockargs *, struct svc_req *);
#define NLM4_FREE_ALL ((rpc_uint)23)
extern "C" void * nlm4_free_all_4(nlm4_notify *, CLIENT *);
extern "C" void * nlm4_free_all_4_svc(nlm4_notify *, struct svc_req *);

#elif __STDC__
#define NLM4_TEST ((rpc_uint)1)
extern  nlm4_testres * nlm4_test_4(nlm4_testargs *, CLIENT *);
extern  nlm4_testres * nlm4_test_4_svc(nlm4_testargs *, struct svc_req *);
#define NLM4_LOCK ((rpc_uint)2)
extern  nlm4_res * nlm4_lock_4(nlm4_lockargs *, CLIENT *);
extern  nlm4_res * nlm4_lock_4_svc(nlm4_lockargs *, struct svc_req *);
#define NLM4_CANCEL ((rpc_uint)3)
extern  nlm4_res * nlm4_cancel_4(nlm4_cancargs *, CLIENT *);
extern  nlm4_res * nlm4_cancel_4_svc(nlm4_cancargs *, struct svc_req *);
#define NLM4_UNLOCK ((rpc_uint)4)
extern  nlm4_res * nlm4_unlock_4(nlm4_unlockargs *, CLIENT *);
extern  nlm4_res * nlm4_unlock_4_svc(nlm4_unlockargs *, struct svc_req *);
#define NLM4_GRANTED ((rpc_uint)5)
extern  nlm4_res * nlm4_granted_4(nlm4_testargs *, CLIENT *);
extern  nlm4_res * nlm4_granted_4_svc(nlm4_testargs *, struct svc_req *);
#define NLM4_TEST_MSG ((rpc_uint)6)
extern  void * nlm4_test_msg_4(nlm4_testargs *, CLIENT *);
extern  void * nlm4_test_msg_4_svc(nlm4_testargs *, struct svc_req *);
#define NLM4_LOCK_MSG ((rpc_uint)7)
extern  void * nlm4_lock_msg_4(nlm4_lockargs *, CLIENT *);
extern  void * nlm4_lock_msg_4_svc(nlm4_lockargs *, struct svc_req *);
#define NLM4_CANCEL_MSG ((rpc_uint)8)
extern  void * nlm4_cancel_msg_4(nlm4_cancargs *, CLIENT *);
extern  void * nlm4_cancel_msg_4_svc(nlm4_cancargs *, struct svc_req *);
#define NLM4_UNLOCK_MSG ((rpc_uint)9)
extern  void * nlm4_unlock_msg_4(nlm4_unlockargs *, CLIENT *);
extern  void * nlm4_unlock_msg_4_svc(nlm4_unlockargs *, struct svc_req *);
#define NLM4_GRANTED_MSG ((rpc_uint)10)
extern  void * nlm4_granted_msg_4(nlm4_testargs *, CLIENT *);
extern  void * nlm4_granted_msg_4_svc(nlm4_testargs *, struct svc_req *);
#define NLM4_TEST_RES ((rpc_uint)11)
extern  void * nlm4_test_res_4(nlm4_testres *, CLIENT *);
extern  void * nlm4_test_res_4_svc(nlm4_testres *, struct svc_req *);
#define NLM4_LOCK_RES ((rpc_uint)12)
extern  void * nlm4_lock_res_4(nlm4_res *, CLIENT *);
extern  void * nlm4_lock_res_4_svc(nlm4_res *, struct svc_req *);
#define NLM4_CANCEL_RES ((rpc_uint)13)
extern  void * nlm4_cancel_res_4(nlm4_res *, CLIENT *);
extern  void * nlm4_cancel_res_4_svc(nlm4_res *, struct svc_req *);
#define NLM4_UNLOCK_RES ((rpc_uint)14)
extern  void * nlm4_unlock_res_4(nlm4_res *, CLIENT *);
extern  void * nlm4_unlock_res_4_svc(nlm4_res *, struct svc_req *);
#define NLM4_GRANTED_RES ((rpc_uint)15)
extern  void * nlm4_granted_res_4(nlm4_res *, CLIENT *);
extern  void * nlm4_granted_res_4_svc(nlm4_res *, struct svc_req *);
#define NLM4_SHARE ((rpc_uint)20)
extern  nlm4_shareres * nlm4_share_4(nlm4_shareargs *, CLIENT *);
extern  nlm4_shareres * nlm4_share_4_svc(nlm4_shareargs *, struct svc_req *);
#define NLM4_UNSHARE ((rpc_uint)21)
extern  nlm4_shareres * nlm4_unshare_4(nlm4_shareargs *, CLIENT *);
extern  nlm4_shareres * nlm4_unshare_4_svc(nlm4_shareargs *, struct svc_req *);
#define NLM4_NM_LOCK ((rpc_uint)22)
extern  nlm4_res * nlm4_nm_lock_4(nlm4_lockargs *, CLIENT *);
extern  nlm4_res * nlm4_nm_lock_4_svc(nlm4_lockargs *, struct svc_req *);
#define NLM4_FREE_ALL ((rpc_uint)23)
extern  void * nlm4_free_all_4(nlm4_notify *, CLIENT *);
extern  void * nlm4_free_all_4_svc(nlm4_notify *, struct svc_req *);

#else /* Old Style C */
#define NLM4_TEST ((rpc_uint)1)
extern  nlm4_testres * nlm4_test_4();
extern  nlm4_testres * nlm4_test_4_svc();
#define NLM4_LOCK ((rpc_uint)2)
extern  nlm4_res * nlm4_lock_4();
extern  nlm4_res * nlm4_lock_4_svc();
#define NLM4_CANCEL ((rpc_uint)3)
extern  nlm4_res * nlm4_cancel_4();
extern  nlm4_res * nlm4_cancel_4_svc();
#define NLM4_UNLOCK ((rpc_uint)4)
extern  nlm4_res * nlm4_unlock_4();
extern  nlm4_res * nlm4_unlock_4_svc();
#define NLM4_GRANTED ((rpc_uint)5)
extern  nlm4_res * nlm4_granted_4();
extern  nlm4_res * nlm4_granted_4_svc();
#define NLM4_TEST_MSG ((rpc_uint)6)
extern  void * nlm4_test_msg_4();
extern  void * nlm4_test_msg_4_svc();
#define NLM4_LOCK_MSG ((rpc_uint)7)
extern  void * nlm4_lock_msg_4();
extern  void * nlm4_lock_msg_4_svc();
#define NLM4_CANCEL_MSG ((rpc_uint)8)
extern  void * nlm4_cancel_msg_4();
extern  void * nlm4_cancel_msg_4_svc();
#define NLM4_UNLOCK_MSG ((rpc_uint)9)
extern  void * nlm4_unlock_msg_4();
extern  void * nlm4_unlock_msg_4_svc();
#define NLM4_GRANTED_MSG ((rpc_uint)10)
extern  void * nlm4_granted_msg_4();
extern  void * nlm4_granted_msg_4_svc();
#define NLM4_TEST_RES ((rpc_uint)11)
extern  void * nlm4_test_res_4();
extern  void * nlm4_test_res_4_svc();
#define NLM4_LOCK_RES ((rpc_uint)12)
extern  void * nlm4_lock_res_4();
extern  void * nlm4_lock_res_4_svc();
#define NLM4_CANCEL_RES ((rpc_uint)13)
extern  void * nlm4_cancel_res_4();
extern  void * nlm4_cancel_res_4_svc();
#define NLM4_UNLOCK_RES ((rpc_uint)14)
extern  void * nlm4_unlock_res_4();
extern  void * nlm4_unlock_res_4_svc();
#define NLM4_GRANTED_RES ((rpc_uint)15)
extern  void * nlm4_granted_res_4();
extern  void * nlm4_granted_res_4_svc();
#define NLM4_SHARE ((rpc_uint)20)
extern  nlm4_shareres * nlm4_share_4();
extern  nlm4_shareres * nlm4_share_4_svc();
#define NLM4_UNSHARE ((rpc_uint)21)
extern  nlm4_shareres * nlm4_unshare_4();
extern  nlm4_shareres * nlm4_unshare_4_svc();
#define NLM4_NM_LOCK ((rpc_uint)22)
extern  nlm4_res * nlm4_nm_lock_4();
extern  nlm4_res * nlm4_nm_lock_4_svc();
#define NLM4_FREE_ALL ((rpc_uint)23)
extern  void * nlm4_free_all_4();
extern  void * nlm4_free_all_4_svc();
#endif /* Old Style C */

#endif /* !_NLM_PROT_H_RPCGEN */
