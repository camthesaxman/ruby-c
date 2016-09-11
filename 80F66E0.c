int sub_80F66E0()
{
  unsigned int v0; // r9@1
  unsigned int v1; // r7@1
  unsigned int v2; // r12@1
  signed int v3; // r0@2
  unsigned int v4; // r2@4
  char v5; // r0@4
  unsigned int v6; // r4@6
  unsigned __int8 i; // r8@6
  unsigned __int8 v8; // r0@7
  unsigned int v9; // r2@15
  unsigned int v10; // r12@15
  int v12; // [sp+20h] [bp-4h]@0

  sub_80F6514((_BYTE *)0x2008829, v200876E, 0);
  sub_80F4824(v200876E, 0);
  v20087DC = v200876E;
  v200BC8E = 0;
  v0 = 0;
  v1 = sub_80F44B0(*(_BYTE *)(4 * v200876E + 0x200893D), *(_BYTE *)(4 * v200876E + 0x200893E) & 0x1F, 82, 0);
  v200BC8F = 0;
  v2 = 0;
  do
  {
    v3 = (unsigned __int16)gUnknown_083E499C[v2];
    if ( v3 > 54 || v3 < 50 )
    {
      v4 = v1 & 1;
      v1 >>= 1;
      v5 = 1;
    }
    else
    {
      v4 = v1 & 7;
      v1 >>= 3;
      v5 = 4;
    }
    v6 = 0;
    for ( i = v5 + v0; v6 < v4; v6 = (v6 + 1) & 0xFFFF )
    {
      v8 = v200BC8E++;
      *(_BYTE *)(v8 + 0x200BC4C) = v0 + v6;
    }
    if ( v4 && v0 > 0x18 )
      ++v200BC8F;
    v0 = i;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x10 );
  if ( v200BC8E == v200BC8F )
  {
    v200BC90 = 0;
    v200BC91 = 3;
  }
  else
  {
    v200BC90 = 0;
    v200BC91 = 0;
  }
  v9 = (v200BC8E - v200BC8F) & 0xFF;
  v10 = 0;
  do
  {
    if ( v9 <= 8 )
    {
      *(_BYTE *)(v10 + 33602710) = v9;
      v9 = 0;
    }
    else
    {
      *(_BYTE *)(v10 + 33602710) = 9;
      v9 = (v9 - 9) & 0xFF;
    }
    v10 = (v10 + 1) & 0xFFFF;
  }
  while ( v10 <= 2 );
  *(_BYTE *)(v10 + 33602710) = v200BC8F;
  return v12;
}
