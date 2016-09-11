int __fastcall sub_81301EC(unsigned __int8 a1)
{
  int *v1; // r6@1
  int v2; // r4@5
  signed int v3; // r0@5
  __int16 v4; // r0@7
  int v5; // r4@8
  signed int v6; // r0@8
  __int16 v7; // r4@11
  signed int v8; // r0@11
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( (unsigned __int8)sub_8076BE0() )
  {
    *((_WORD *)v1 + 9) = 8;
    *((_WORD *)v1 + 10) = 3;
    *((_WORD *)v1 + 11) = 1;
  }
  else
  {
    *((_WORD *)v1 + 9) = 12;
    *((_WORD *)v1 + 10) = 3;
    *((_WORD *)v1 + 11) = 0;
  }
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v5 = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
    v6 = (signed __int16)sub_807A100(v202F7C8, 0);
    if ( (signed __int16)v6 < 0 )
      v6 += 3;
    v4 = v5 - (v6 >> 2);
  }
  else
  {
    v2 = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
    v3 = (signed __int16)sub_807A100(v202F7C8, 0);
    if ( (signed __int16)v3 < 0 )
      v3 += 3;
    v4 = v2 + (v3 >> 2);
  }
  *((_WORD *)v1 + 15) = v4;
  v7 = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  v8 = (signed __int16)sub_807A100(v202F7C8, 0);
  if ( (signed __int16)v8 < 0 )
    v8 += 3;
  *((_WORD *)v1 + 16) = v7 - (v8 >> 2);
  *((_WORD *)v1 + 17) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *((_WORD *)v1 + 18) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  *v1 = (int)sub_81302E4;
  return v10;
}
