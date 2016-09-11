int __fastcall sub_80DC0B0(unsigned __int8 a1)
{
  int *v1; // r5@1
  __int16 v2; // r0@3
  __int16 v3; // r0@4
  int v5; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( !(sub_8076BE0() << 24) )
  {
    if ( word_3004B00[0] == 1 )
    {
      *((_WORD *)v1 + 14) = -10;
      *((_WORD *)v1 + 15) = sub_807A100(v202F7C9, 4u) + 8;
      *((_WORD *)v1 + 16) = sub_807A100(v202F7C9, 2u) + 8;
      *((_WORD *)v1 + 17) = sub_807A100(v202F7C8, 4u) + 8;
      v2 = sub_807A100(v202F7C8, 2u) + 8;
      goto _080DC1DE;
    }
    *((_WORD *)v1 + 14) = 10;
    *((_WORD *)v1 + 15) = sub_807A100(v202F7C8, 5u) - 8;
    *((_WORD *)v1 + 16) = sub_807A100(v202F7C8, 3u) - 8;
    v3 = sub_807A100(v202F7C9, 5u) - 8;
_080DC1D2:
    *((_WORD *)v1 + 17) = v3;
    v2 = sub_807A100(v202F7C9, 3u) - 8;
    goto _080DC1DE;
  }
  if ( word_3004B00[0] != 1 )
  {
    *((_WORD *)v1 + 14) = 10;
    *((_WORD *)v1 + 15) = sub_807A100(v202F7C8, 4u) + 8;
    *((_WORD *)v1 + 16) = sub_807A100(v202F7C8, 3u) - 8;
    v3 = sub_807A100(v202F7C9, 4u) + 8;
    goto _080DC1D2;
  }
  *((_WORD *)v1 + 14) = -10;
  *((_WORD *)v1 + 15) = sub_807A100(v202F7C9, 5u) - 8;
  *((_WORD *)v1 + 16) = sub_807A100(v202F7C9, 2u) + 8;
  *((_WORD *)v1 + 17) = sub_807A100(v202F7C8, 5u) - 8;
  v2 = sub_807A100(v202F7C8, 2u) + 8;
_080DC1DE:
  *((_WORD *)v1 + 18) = v2;
  *((_WORD *)v1 + 5) = 6;
  *v1 = (int)sub_80DC1FC;
  return v5;
}
