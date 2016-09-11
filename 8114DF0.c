int __fastcall sub_8114DF0(int a1, int a2)
{
  unsigned int v2; // r1@1
  unsigned int v3; // r3@1
  _BYTE *v4; // r2@1
  _BYTE *v5; // r1@1
  char v6; // r1@3
  char v7; // r0@3
  int v9; // [sp+0h] [bp-4h]@0

  v2 = a2 << 24;
  v3 = v2 >> 24;
  v4 = *(_BYTE **)(4 * (v2 >> 25) + (a1 << 7) + 0x20188C4);
  v5 = v4 + 24576;
  if ( v3 & 1 )
  {
    if ( !(*v5 & 0xF0) )
    {
      v6 = *v4;
      v7 = 15;
_08114E3E:
      *v4 = v7 & v6;
      return v9;
    }
  }
  else if ( !(*v5 & 0xF) )
  {
    v6 = *v4;
    v7 = -16;
    goto _08114E3E;
  }
  return v9;
}
