int __fastcall sub_8079C74(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int result; // r0@2
  __int16 v4; // r0@4

  v1 = a1;
  v2 = *(_WORD *)(a1 + 24);
  if ( *(_WORD *)(a1 + 24) )
  {
    *(_WORD *)(a1 + 24) = v2 - 1;
    if ( (v2 - 1) << 16 )
    {
      *(_WORD *)(a1 + 26) += *(_WORD *)(a1 + 30);
      v4 = *(_WORD *)(a1 + 32) + *(_WORD *)(a1 + 28);
    }
    else
    {
      *(_WORD *)(a1 + 26) = *(_WORD *)(a1 + 34);
      v4 = *(_WORD *)(a1 + 36);
    }
    *(_WORD *)(v1 + 28) = v4;
    obj_id_set_rotscale(*(_BYTE *)(v1 + 38), *(_WORD *)(v1 + 26), *(_WORD *)(v1 + 28), 0);
    if ( *(_WORD *)(v1 + 24) )
      sub_8079A64(*(_BYTE *)(v1 + 38));
    else
      *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 38) + 38] = 0;
    result = *(_BYTE *)(v1 + 24);
  }
  else
  {
    result = 0;
  }
  return result;
}
