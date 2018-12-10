/* Do not edit. File generated by rastro. */

#ifndef __AUTO_RASTRO_FILE_H__
#define __AUTO_RASTRO_FILE_H__
#include <rastro.h>

/* Rastro function prototype for 'i' */
void rst_event_i_ptr(rst_buffer_t *ptr, u_int16_t type, u_int32_t i0);
void rst_event_i_f_ (int16_t *type, int32_t* i0);
#define rst_event_i(type, i0) rst_event_i_ptr(RST_PTR, type, i0)

/* Rastro function prototype for 'iil' */
void rst_event_iil_ptr(rst_buffer_t *ptr, u_int16_t type, u_int32_t i0, u_int32_t i1, u_int64_t l0);
void rst_event_iil_f_ (int16_t *type, int32_t* i0, int32_t* i1, int64_t* l0);
#define rst_event_iil(type, i0, i1, l0) rst_event_iil_ptr(RST_PTR, type, i0, i1, l0)

/* Rastro function prototype for 'il' */
void rst_event_il_ptr(rst_buffer_t *ptr, u_int16_t type, u_int32_t i0, u_int64_t l0);
void rst_event_il_f_ (int16_t *type, int32_t* i0, int64_t* l0);
#define rst_event_il(type, i0, l0) rst_event_il_ptr(RST_PTR, type, i0, l0)

/* Rastro function prototype for 'l' */
void rst_event_l_ptr(rst_buffer_t *ptr, u_int16_t type, u_int64_t l0);
void rst_event_l_f_ (int16_t *type, int64_t* l0);
#define rst_event_l(type, l0) rst_event_l_ptr(RST_PTR, type, l0)

void rst_init_f_(int64_t *id1, int64_t *id2);
void rst_finalize_f_ (void);

#endif //__AUTO_RASTRO_FILE_H__
