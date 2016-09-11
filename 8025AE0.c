int sub_8025AE0()
{
  int v0; // r4@1
  unsigned __int8 v1; // r0@3
  int v2; // r1@3
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  if ( sub_8025A44(v2024C08) << 24 )
  {
    v2024C10 = v0;
  }
  else
  {
    v1 = *(_BYTE *)(88 * v2024C08 + 0x2024AA0);
    v2 = *(_BYTE *)(88 * v2024C08 + 0x2024AA0);
    if ( v2 != 15 && v2 != 72 )
    {
      v2024C10 += 5;
    }
    else
    {
      v2024C06 = *(_BYTE *)(88 * v2024C08 + 0x2024AA0);
      v2024D23 = 2;
      v2024C10 = v0;
      sub_81074C4(v2024C08, v1);
    }
  }
  return v4;
}
