int __fastcall sub_806DF60(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  unsigned __int8 v3; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int *v6; // r4@1
  int v7; // r2@1
  int v8; // r2@1
  unsigned __int16 v9; // r0@3
  int v10; // r1@3
  int v11; // r2@3
  int v12; // r3@3
  char *v13; // r4@4
  char *v14; // r0@4
  char v15; // r1@4
  int v17; // [sp+Ch] [bp-4h]@0

  v2 = a2;
  v3 = sub_806DF34(a1, a2);
  v4 = v3;
  v5 = v3;
  v6 = &dword_3004360[25 * v2];
  if ( GetMonData((int)v6, 12, v7) )
  {
    v9 = GetMonData((int)v6, 12, v8);
    if ( itemid_is_mail(v9, v10, v11, v12) << 24 )
    {
      v13 = &gSprites[68 * v4];
      v14 = &gSprites[68 * v4];
      v15 = 1;
    }
    else
    {
      v13 = &gSprites[68 * v5];
      v14 = &gSprites[68 * v5];
      v15 = 0;
    }
    StartSpriteAnim((int)v14, v15);
    v13[62] &= 0xFBu;
  }
  else
  {
    gSprites[68 * v4 + 62] |= 4u;
  }
  return v17;
}
