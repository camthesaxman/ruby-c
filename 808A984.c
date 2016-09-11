int __fastcall sub_808A984(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r6@1
  _BYTE *v4; // r4@1
  unsigned __int8 v5; // r0@3
  int v7; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 5 * a1;
  v3 = 2 * v2;
  v4 = &byte_3004B28[8 * v2];
  sub_8072DEC(v2);
  *((_WORD *)v4 + 11) = *(_BYTE *)(v202FFA8 + 0x202FFAA) - 10;
  if ( (sub_80F9344() & 0xFF) == 1 )
  {
    MenuZeroFillWindowRect(0x13u, 0, 0x1Du, 0x13u);
    if ( ((*((_WORD *)v4 + 11) - 11) & 0xFFFFu) <= 1 )
    {
      v5 = 9;
_0808AAB2:
      sub_806D538(v5, 0);
_0808AACC:
      dword_3004B20[10 * v1] = (int)sub_808ABF4;
      return v7;
    }
    goto _0808AABA;
  }
  if ( (signed int)*((_WORD *)v4 + 11) > 7 || (unsigned __int8)FlagGet(*((_WORD *)v4 + 11) + 2055) == 1 )
  {
    if ( (unsigned __int8)call_via_r0(gUnknown_0839F58C[2 * *((_WORD *)v4 + 11)]) != 1 )
    {
      MenuZeroFillWindowRect(0x13u, 0, 0x1Du, 0x13u);
      if ( *((_WORD *)v4 + 11) == 4 && TestPlayerAvatarFlags(8u) << 24 )
      {
        v5 = 8;
        goto _0808AAB2;
      }
_0808AABA:
      sub_806D538(gUnknown_0839F58C[2 * *((_WORD *)v4 + 11) + 1], 0);
      goto _0808AACC;
    }
    v202FFA8 = 0;
    if ( ((*((_WORD *)v4 + 11) - 11) & 0xFFFFu) <= 1 )
    {
      unref_sub_8133D28(v1);
    }
    else
    {
      dword_3004B20[10 * v1] = (int)sub_808AB34;
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    }
  }
  else
  {
    MenuZeroFillWindowRect(0x13u, 0, 0x1Du, 0x13u);
    sub_806D5A4();
    sub_806E834((int)"ÎÜÝç", 1u);
    dword_3004B20[v3] = (int)sub_808AAF0;
  }
  return v7;
}
