int sub_80C33DC()
{
  const char *v0; // r6@1
  signed int v1; // r4@1
  signed int v2; // r4@3
  signed int v4; // [sp+0h] [bp-30h]@1
  signed int v5; // [sp+4h] [bp-2Ch]@1
  signed int v6; // [sp+8h] [bp-28h]@1
  int v7; // [sp+Ch] [bp-24h]@1
  signed int v8; // [sp+10h] [bp-20h]@1
  signed int v9; // [sp+14h] [bp-1Ch]@1
  unsigned __int8 v10; // [sp+18h] [bp-18h]@4
  unsigned __int8 v11; // [sp+19h] [bp-17h]@5
  unsigned __int8 v12; // [sp+1Ah] [bp-16h]@5
  unsigned __int8 v13; // [sp+1Bh] [bp-15h]@5
  unsigned __int8 v14; // [sp+1Ch] [bp-14h]@5
  unsigned __int8 v15; // [sp+1Dh] [bp-13h]@5
  unsigned __int8 v16; // [sp+1Eh] [bp-12h]@5
  unsigned __int8 v17; // [sp+1Fh] [bp-11h]@5
  int v18; // [sp+2Ch] [bp-4h]@5

  v4 = 197200833;
  v5 = 138221380;
  v6 = 136194308;
  v7 = 0;
  v8 = 136194320;
  v9 = 134222353;
  v0 = "܉ \b";
  v1 = 7;
  do
  {
    LoadSpriteSheet((int)v0);
    v0 += 8;
    --v1;
  }
  while ( v1 >= 0 );
  LoadSpritePalette((int)&gUnknown_083D17A4);
  v2 = 0;
  do
  {
    *(&v10 + v2) = CreateSprite((int)&v4, 272, 144);
    LOWORD(v4) = v4 + 1;
    ++v2;
  }
  while ( v2 <= 7 );
  *(_WORD *)&gSprites[68 * v10 + 46] = v11;
  *(_WORD *)&gSprites[68 * v10 + 48] = v12;
  *(_WORD *)&gSprites[68 * v10 + 50] = v13;
  *(_WORD *)&gSprites[68 * v14 + 46] = v15;
  *(_WORD *)&gSprites[68 * v14 + 48] = v16;
  *(_WORD *)&gSprites[68 * v14 + 50] = v17;
  v2018000 = v10;
  v2018004 = 0;
  v2018001 = v14;
  sub_80C3764();
  return v18;
}
