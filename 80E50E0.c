int __fastcall MovePlayerOnMachBike(unsigned __int8 a1)
{
  int v1; // r0@1
  unsigned __int8 v3; // [sp+0h] [bp-Ch]@1
  int v4; // [sp+8h] [bp-4h]@1

  v3 = a1;
  v1 = CheckMovementInputMachBike(&v3);
  call_via_r2(v3, v3, *(void **)((char *)&gUnknown_083DB594 + (4 * v1 & 0x3FF)));
  return v4;
}
