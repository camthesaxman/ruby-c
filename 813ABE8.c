int __fastcall sub_813ABE8(unsigned __int8 a1)
{
  int v1; // r1@1
  _BYTE *v2; // r6@1
  int v3; // r8@1
  int v4; // r5@1
  int i; // r1@1
  int v6; // r7@3
  int v7; // r4@6
  unsigned int v8; // r0@6
  int v10; // [sp+18h] [bp-4h]@0

  v1 = 40 * a1;
  v2 = &byte_3004B28[v1];
  LOBYTE(v3) = 0;
  v4 = *(_WORD *)&byte_3004B28[v1 + 2];
  for ( i = *(_WORD *)&byte_3004B28[v1 + 2]; v4 < i + *((_WORD *)v2 + 4); i = *((_WORD *)v2 + 1) )
  {
    v3 = 2 * (v4 - i) & 0xFFFF;
    if ( v4 == *((_WORD *)v2 + 2) )
    {
      sub_8072A18((int)&OtherText_Cancel2, -128, 8 * (2 * (v4 - i) + 2), 104, 1);
      break;
    }
    v6 = 0;
    if ( *((_WORD *)v2 + 9) && v4 == *((_WORD *)v2 + 8) )
      v6 = 1;
    v7 = 4 * v4;
    v8 = (unsigned __int8)sub_80A9670(*(_WORD *)(4 * v4 + 0x2025BCC)) - 1;
    if ( v8 <= 4 )
    {
      switch ( v8 )
      {
        case 0u:
        case 1u:
        case 3u:
          sub_813AB64((_WORD *)(v7 + 33709004), v3 + 2, v6);
          break;
        case 4u:
          sub_813AB90((_WORD *)(v7 + 33709004), v3 + 2, v6);
          break;
        case 2u:
          sub_813ABAC((_WORD *)(v7 + 33709004), (v3 + 2) & 0xFF, v6);
          break;
        default:
          break;
      }
    }
    v4 = (v4 + 1) & 0xFFFF;
  }
  if ( v4 - *((_WORD *)v2 + 1) <= 7 )
    MenuFillWindowRectWithBlankTile(0x10u, v3 + 4, 0x1Cu, 0x12u);
  if ( *((_WORD *)v2 + 1) )
    sub_80F953C(0, 184, 8);
  else
    SetBgTilemapBuffer(0);
  if ( *((_WORD *)v2 + 1) + (signed int)*((_WORD *)v2 + 4) > *((_WORD *)v2 + 2) )
    SetBgTilemapBuffer(1u);
  else
    sub_80F953C(1u, 184, 152);
  return v10;
}
