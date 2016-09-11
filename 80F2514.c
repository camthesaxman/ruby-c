int __fastcall sub_80F2514(signed int a1)
{
  int *v1; // r4@7
  void *v2; // r0@7
  void *v4; // [sp+0h] [bp-10h]@7
  int v5; // [sp+4h] [bp-Ch]@7
  int v6; // [sp+Ch] [bp-4h]@12

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 == 1 )
  {
    v4 = &gPokenavConditionMenu_Pal;
    LOWORD(v5) = 0;
  }
  else
  {
    if ( a1 > 1 )
    {
      if ( a1 != 2 )
        return v6;
      v4 = &gPokenavCondition6_Pal;
      v1 = (int *)&v4;
      LOWORD(v5) = 0;
      LoadSpritePalette((int)&v4);
      v2 = &gPokenavCondition7_Pal;
    }
    else
    {
      if ( a1 )
        return v6;
      v4 = &gPokenavMenuOptions1_Pal;
      v1 = (int *)&v4;
      v5 &= 0xFFFF0000;
      LoadSpritePalette((int)&v4);
      v2 = &gPokenavMenuOptions2_Pal;
    }
    v4 = v2;
    *((_WORD *)v1 + 2) = 1;
  }
  LoadSpritePalette((int)&v4);
  return v6;
}
