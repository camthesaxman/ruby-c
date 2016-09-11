signed int __fastcall sub_80AF038(int a1)
{
  signed int v1; // r5@1
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r1@3

  v1 = 1;
  LOWORD(v2) = 0;
  v3 = (5 * *(_BYTE *)((unsigned __int8)a1 + 0x2038696) + 2) & 0xFF;
  if ( *(_DWORD *)(28 * (unsigned __int8)a1 + 0x2019270) & 0xFF0003 || *(_BYTE *)(28 * (unsigned __int8)a1 + 0x201926F) )
  {
    a1 = (unsigned __int8)a1;
    v4 = 0;
_080AF0A6:
    v2 = sub_80AEFE8(a1, v4) & 0xFFFF;
    goto _080AF0B2;
  }
  if ( *(_BYTE *)(28 * (unsigned __int8)a1 + 0x201926C) & 1 )
  {
    a1 = (unsigned __int8)a1;
    v4 = 1;
    goto _080AF0A6;
  }
  if ( *(_BYTE *)(28 * (unsigned __int8)a1 + 0x201926C) & 6 || *(_BYTE *)(28 * (unsigned __int8)a1 + 0x201926B) & 0x80 )
  {
    a1 = (unsigned __int8)a1;
    v4 = 2;
    goto _080AF0A6;
  }
  v1 = 0;
_080AF0B2:
  if ( v1 )
  {
    *(_WORD *)((v3 << 6) + 0x600C028) = v2;
    *(_WORD *)((v3 << 6) + 0x600C02A) = v2 + 1;
    *(_WORD *)((v3 << 6) + 0x600C068) = v2 + 16;
    *(_WORD *)((v3 << 6) + 0x600C06A) = v2 + 17;
  }
  else
  {
    *(_WORD *)((v3 << 6) + 0x600C028) = 0;
    *(_WORD *)((v3 << 6) + 0x600C02A) = 0;
    *(_WORD *)((v3 << 6) + 0x600C068) = 0;
    *(_WORD *)((v3 << 6) + 0x600C06A) = 0;
  }
  return v1;
}
