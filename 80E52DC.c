int __fastcall MovePlayerOnAcroBike(unsigned __int8 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // r0@1
  unsigned __int8 v5; // [sp+0h] [bp-Ch]@1
  int v6; // [sp+8h] [bp-4h]@1

  v5 = a1;
  v3 = CheckMovementInputAcroBike(&v5, a2, a3);
  call_via_r2(v5, v5, *(void **)((char *)&gUnknown_083DB5B0 + (4 * v3 & 0x3FF)));
  return v6;
}
