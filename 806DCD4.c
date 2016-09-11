int __fastcall sub_806DCD4(unsigned __int8 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  int v3; // r7@1
  int v4; // r4@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r6@1
  char *v8; // r5@1
  char *v9; // r0@4
  char v10; // r1@4
  int v12; // [sp+10h] [bp-4h]@0

  v3 = a3;
  v4 = (unsigned __int8)sub_806DDA0(a1, a2);
  v7 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_837660C, 250, 170);
  v8 = &gSprites[68 * v7];
  *((_WORD *)v8 + 18) = 4;
  *((_WORD *)v8 + 19) = 10;
  *((_WORD *)v8 + 30) = v4;
  *(_WORD *)&gSprites[68 * v4 + 60] = v7;
  if ( v3 )
  {
    if ( itemid_is_mail(v3, gSprites, v5, v6) << 24 )
    {
      v9 = &gSprites[68 * v7];
      v10 = 1;
    }
    else
    {
      v9 = &gSprites[68 * v7];
      v10 = 0;
    }
    StartSpriteAnim((int)v9, v10);
    v8[62] &= 0xFBu;
  }
  else
  {
    v8[62] |= 4u;
  }
  call_via_r1(&gSprites[68 * v7], dword_2020020[17 * v7]);
  return v12;
}
