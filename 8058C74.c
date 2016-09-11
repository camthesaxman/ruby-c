int __fastcall MovePlayerNotOnBike(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = CheckMovementInputNotOnBike(a1);
  call_via_r2(v2, v3, *(void **)((char *)&gUnknown_0830FBEC + (4 * v4 & 0x3FF)));
  return v6;
}
