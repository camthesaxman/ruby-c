signed int __fastcall sub_807992C(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  signed int v3; // r2@1
  int v4; // r1@6
  __int16 v5; // r0@6
  __int16 v6; // r2@9
  int v7; // r1@10
  int v8; // r2@15

  v1 = a1;
  v2 = sub_8079BFC(*(_WORD *)(a1 + 34), *(_WORD *)(a1 + 36)) + 8 * *(_WORD *)(a1 + 22);
  v202F7D4 = v2;
  v3 = *(_WORD *)v2;
  if ( v3 != 32766 )
  {
    if ( v3 > 32766 )
    {
      *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 38) + 38] = 0;
      sub_8078F40(*(_BYTE *)(v1 + 38));
      return 0;
    }
    if ( v3 != 32765 )
    {
      if ( !*(_BYTE *)(v2 + 5) )
      {
        *(_WORD *)(v1 + 28) = *(_WORD *)v2;
        *(_WORD *)(v1 + 30) = *(_WORD *)(v2 + 2);
        *(_WORD *)(v1 + 32) = *(_BYTE *)(v2 + 4);
        ++*(_WORD *)(v1 + 22);
        v202F7D4 = v2 + 8;
      }
      v4 = v202F7D4;
      *(_WORD *)(v1 + 28) += *v202F7D4;
      *(_WORD *)(v1 + 30) += *(_WORD *)(v4 + 2);
      *(_WORD *)(v1 + 32) += *(_BYTE *)(v4 + 4);
      obj_id_set_rotscale(*(_BYTE *)(v1 + 38), *(_WORD *)(v1 + 28), *(_WORD *)(v1 + 30), *(_WORD *)(v1 + 32));
      sub_8079A64(*(_WORD *)(v1 + 38) & 0xFF);
      v5 = *(_WORD *)(v1 + 24) + 1;
      *(_WORD *)(v1 + 24) = v5;
      if ( v5 < (signed int)*(_BYTE *)(v202F7D4 + 5) )
        return 1;
      *(_WORD *)(v1 + 24) = 0;
      goto _08079A2C;
    }
    v6 = *(_WORD *)(v2 + 2);
    if ( *(_WORD *)(v2 + 2) )
    {
      v7 = *(_WORD *)(v1 + 26);
      if ( *(_WORD *)(v1 + 26) )
      {
        *(_WORD *)(v1 + 26) = v7 - 1;
        if ( !((v7 - 1) << 16) )
          goto _08079A2C;
      }
      else
      {
        *(_WORD *)(v1 + 26) = v6;
      }
      if ( *(_WORD *)(v1 + 22) )
      {
        while ( 1 )
        {
          v8 = *(_WORD *)(v1 + 22);
          *(_WORD *)(v1 + 22) = v8 - 1;
          v202F7D4 -= 8;
          if ( *v202F7D4 == 32765 )
            break;
          if ( !((v8 - 1) << 16) )
            return 1;
        }
        *(_WORD *)(v1 + 22) = v8;
      }
      return 1;
    }
_08079A2C:
    ++*(_WORD *)(v1 + 22);
    return 1;
  }
  *(_WORD *)(v1 + 22) = *(_WORD *)(v2 + 2);
  return 1;
}
