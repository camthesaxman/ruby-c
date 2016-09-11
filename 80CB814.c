signed int __fastcall sub_80CB814(int a1)
{
  int v1; // r8@1
  unsigned int v2; // r10@1
  __int16 v3; // r9@1
  unsigned int v4; // r2@1
  int v5; // r1@1
  signed int v6; // r7@5
  int v7; // r0@5
  int v8; // r3@5
  signed int result; // r0@6

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56) / 0x100u;
  v3 = *(_WORD *)(a1 + 56) & 0xFF;
  v4 = *(_WORD *)(a1 + 58) / 0x100u;
  v5 = *(_WORD *)(a1 + 60);
  if ( v4 )
  {
    if ( v4 == 255 )
      v4 = 272;
  }
  else
  {
    v4 = -32;
  }
  v6 = (signed __int16)(*(_WORD *)(a1 + 60) << 16 >> 24);
  v7 = (signed __int16)((*(_WORD *)(a1 + 58) & 0xFF) - v3) * (unsigned __int8)v5 / v6;
  *(_WORD *)(v1 + 32) = (unsigned int)((signed int)((v4 - v2) * (unsigned __int8)v5) / (signed __int16)(v5 << 16 >> 24))
                      + v2;
  *(_WORD *)(v1 + 34) = v7 + v3;
  v8 = ((unsigned __int8)v5 + 1) & 0xFFFF;
  if ( (signed __int16)((unsigned __int8)v5 + 1) == v6 )
  {
    result = 1;
  }
  else
  {
    *(_WORD *)(v1 + 60) = v8 | ((unsigned __int16)(v5 << 16 >> 24) << 8);
    result = 0;
  }
  return result;
}
