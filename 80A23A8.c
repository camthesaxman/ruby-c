_DWORD *__fastcall npc_obj_offscreen_culling_and_flag_update(int a1, int a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)((4 * a1 & 0x3FF) + 33785080);
  *result = a2;
  return result;
}
