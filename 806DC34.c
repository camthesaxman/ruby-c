int __fastcall sub_806DC34(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r8@1
  unsigned int v4; // r7@1
  int v5; // r5@3
  int v6; // r0@3
  int v7; // r4@3
  char *v8; // r6@3
  int v10; // [sp+1Ch] [bp-4h]@0

  v3 = a1;
  v4 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v4], 11, a3) )
    {
      v5 = (unsigned __int8)sub_806DDA0(v3, v4);
      v6 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_837660C, 250, 170);
      v7 = 17 * v6;
      v8 = &gSprites[68 * v6];
      *((_WORD *)v8 + 18) = 4;
      *((_WORD *)v8 + 19) = 10;
      *((_WORD *)v8 + 30) = v5;
      *(_WORD *)&gSprites[68 * v5 + 60] = v6;
      sub_806DF60(v3, v4);
      call_via_r1(v8, dword_2020020[v7]);
    }
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 5 );
  return v10;
}
