int sub_80EF9F8()
{
  unsigned int v0; // r5@1
  unsigned int i; // r4@5
  int v2; // r0@8
  int *v3; // r6@10
  signed __int16 v4; // r0@11
  int v6; // [sp+20h] [bp-4h]@0

  v0 = 4;
  if ( v2006E2E <= 4u )
  {
    switch ( v2006E2E )
    {
      case 1u:
      case 4u:
        sub_8072A18(33582616, 112, 32, 120, 1);
        v0 = 6;
        if ( gLinkOpen == 1 )
        {
          sub_80F1A80();
          goto _080EFB82;
        }
        for ( i = 0; i <= 3; i = (i + 1) & 0xFFFF )
        {
          v2 = sub_811A8CC(v2006E2C, v2006E2F, (unsigned __int8)i);
          if ( !v2 )
            break;
          sub_8072A18(v2, 112, 8 * v0, 120, 1);
          v0 = (v0 + 2) & 0xFFFF;
        }
        break;
      case 2u:
        sub_8072A18(33582616, 112, 32, 120, 1);
        v0 = 6;
        v3 = (int *)(4 * v2006E2F + 8 * v2006E2C + 33607116);
        if ( !*(_DWORD *)(4 * v2006E2F + 8 * v2006E2C + 0x200CDCC) )
          break;
        MenuFillWindowRectWithBlankTile(0xEu, 6u, 0xFu, 0xFu);
        MenuFillWindowRectWithBlankTile(0x1Au, 6u, 0x1Cu, 0xFu);
        sub_8095C8C(100726784, 0x10u, 6, *v3, 0, 0, 10, 0xAu, 0xAu);
        v4 = 17;
        goto _080EFB66;
      case 3u:
        sub_8072A18(33582616, 112, 32, 120, 1);
        v4 = 6;
_080EFB66:
        v0 = (unsigned __int16)v4;
        break;
      default:
        break;
    }
  }
  if ( v0 <= 0xF )
    MenuFillWindowRectWithBlankTile(0xEu, v0, 0x1Cu, 0xFu);
_080EFB82:
  if ( v2006E2E == 2 )
    sub_80EFD74();
  else
    sub_80EFDA0();
  return v6;
}
