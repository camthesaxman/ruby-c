int __fastcall sub_80AED7C(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r6@1
  unsigned __int8 v3; // r4@1
  int v4; // r5@1
  __int16 v5; // r0@3
  int v7; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (5 * *(_BYTE *)(a2 + 0x2038696) + 2) & 0xFF;
  if ( sub_80AF59C(a2) << 24 || !v2 )
  {
    *(_WORD *)((v4 << 6) + 0x600C028) = 0;
    *(_WORD *)((v4 << 6) + 0x600C02A) = 0;
    *(_WORD *)((v4 << 6) + 0x600C068) = 0;
    *(_WORD *)((v4 << 6) + 0x600C06A) = 0;
  }
  else
  {
    v5 = sub_80AEB68(v2, v3);
    *(_WORD *)((v4 << 6) + 0x600C028) = v5;
    *(_WORD *)((v4 << 6) + 0x600C02A) = v5 + 1;
    *(_WORD *)((v4 << 6) + 0x600C068) = v5 + 16;
    *(_WORD *)((v4 << 6) + 0x600C06A) = v5 + 17;
  }
  return v7;
}
