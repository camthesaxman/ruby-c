int __fastcall sub_80DB374(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  unsigned __int8 *v3; // r4@5
  __int16 v4; // r0@9
  int v5; // r1@11
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( (signed int)*(_WORD *)(v1 + 50) > 11 )
        v4 = *(_WORD *)(v1 + 48) + 40;
      else
        v4 = *(_WORD *)(v1 + 48) - 40;
      *(_WORD *)(v1 + 48) = v4;
      ++*(_WORD *)(v1 + 50);
      sub_8078FDC(v1, 0, 0x100u, *(_WORD *)(v1 + 48), 0);
      v5 = 15616 / gOamMatrices[4 * ((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27) + 3] + 1;
      if ( v5 > 128 )
        v5 = 128;
      *(_WORD *)(v1 + 38) = (64 - v5) / 2;
      if ( *(_WORD *)(v1 + 50) == 24 )
      {
        sub_8079098(v1);
        move_anim_8072740(v1);
      }
    }
  }
  else
  {
    if ( word_3004B00[0] )
      v3 = (unsigned __int8 *)33748937;
    else
      v3 = (unsigned __int8 *)33748936;
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(*v3, 0);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(*v3, 1u);
    *(_WORD *)(v1 + 48) = 512;
    sub_8078FDC(v1, 0, 0x100u, 0x200u, 0);
    ++*(_WORD *)(v1 + 46);
  }
  return v7;
}
