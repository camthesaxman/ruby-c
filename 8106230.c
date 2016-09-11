int __fastcall sub_8106230(int a1)
{
  int v1; // r5@1
  signed int v2; // r0@1
  __int16 v3; // r0@9
  __int16 v4; // r2@9
  __int16 v5; // r0@17
  __int16 v6; // r2@17
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
    goto _0810627A;
  if ( v2 <= 1 )
  {
    if ( v2 )
      return v8;
    v200005C = 47;
    v200005E = 63;
    v200005A = 8328;
    *(_BYTE *)(v1 + 62) |= 4u;
    ++*(_WORD *)(v1 + 46);
_0810627A:
    v3 = *(_WORD *)(v1 + 48);
    v4 = v3 + 2;
    *(_WORD *)(v1 + 48) = v3 + 2;
    v3 += 178;
    *(_WORD *)(v1 + 50) = v3;
    *(_WORD *)(v1 + 52) = 240 - v4;
    if ( v3 > 208 )
      *(_WORD *)(v1 + 50) = 208;
    if ( (signed int)*(_WORD *)(v1 + 52) <= 207 )
      *(_WORD *)(v1 + 52) = 208;
    v2000058 = (*(_WORD *)(v1 + 50) << 8) | *(_WORD *)(v1 + 52);
    if ( (signed int)*(_WORD *)(v1 + 48) > 51 )
    {
_0810633C:
      ++*(_WORD *)(v1 + 46);
      v200005C = 63;
      return v8;
    }
    return v8;
  }
  if ( v2 == 2 )
  {
    if ( !v2000012 )
      return v8;
    sub_8104D30(5u, (int)SpriteCallbackDummy, 208, 116);
    v2000058 = -16160;
    v200005A = 26752;
    v200005C = 47;
    ++*(_WORD *)(v1 + 46);
    *(_WORD *)(v1 + 48) = 0;
  }
  else if ( v2 != 3 )
  {
    return v8;
  }
  v5 = *(_WORD *)(v1 + 48);
  v6 = v5 + 2;
  *(_WORD *)(v1 + 48) = v5 + 2;
  v5 += 194;
  *(_WORD *)(v1 + 50) = v5;
  *(_WORD *)(v1 + 52) = 224 - v6;
  if ( v5 > 208 )
    *(_WORD *)(v1 + 50) = 208;
  if ( (signed int)*(_WORD *)(v1 + 52) <= 207 )
    *(_WORD *)(v1 + 52) = 208;
  v2000058 = (*(_WORD *)(v1 + 50) << 8) | *(_WORD *)(v1 + 52);
  if ( (signed int)*(_WORD *)(v1 + 48) > 15 )
    goto _0810633C;
  return v8;
}
