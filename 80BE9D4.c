int sub_80BE9D4()
{
  int v0; // r4@3
  char v1; // r0^1@3
  int v3; // [sp+8h] [bp-4h]@0

  byte_3005D38 = sub_80BF74C(33717868);
  if ( byte_3005D38 != -1 && (unsigned __int8)sub_80BF1B4(24) != 1 )
  {
    v0 = 36 * byte_3005D38 + 33717868;
    *(_BYTE *)v0 = 24;
    *(_BYTE *)(v0 + 1) = 0;
    v1 = v20387E3;
    *(_BYTE *)(v0 + 2) = v20387E2;
    *(_BYTE *)(v0 + 3) = v1;
    *(_WORD *)(v0 + 4) = v20387E0;
    StringCopy((_BYTE *)(v0 + 19), (_BYTE *)0x2024EA4);
    sub_80BE138(v0);
    *(_BYTE *)(v0 + 6) = 2;
  }
  return v3;
}
