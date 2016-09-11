int __fastcall b_cancel_multi_turn_move_maybe(int a1)
{
  int v1; // r1@1
  int result; // r0@1

  a1 = (unsigned __int8)a1;
  *(_DWORD *)(88 * a1 + 0x2024AD0) &= 0xFFFFE08F;
  *(_DWORD *)(4 * a1 + 0x2024C98) &= 0xFFFBFF3F;
  v1 = 28 * (unsigned __int8)a1 + 33705128;
  *(_BYTE *)(v1 + 17) = *(_BYTE *)(28 * (unsigned __int8)a1 + 0x2024CB9) & 0xF0;
  result = 0;
  *(_BYTE *)(v1 + 16) = 0;
  return result;
}
