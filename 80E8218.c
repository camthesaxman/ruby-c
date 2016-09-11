int sub_80E8218()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  signed int v4; // [sp+0h] [bp-4Ch]@1
  signed int v5; // [sp+4h] [bp-48h]@1
  void *v6; // [sp+8h] [bp-44h]@1
  signed int v7; // [sp+Ch] [bp-40h]@1
  signed int v8; // [sp+10h] [bp-3Ch]@1
  signed int v9; // [sp+14h] [bp-38h]@1
  signed int v10; // [sp+18h] [bp-34h]@1
  signed int v11; // [sp+1Ch] [bp-30h]@1
  int v12; // [sp+20h] [bp-2Ch]@1
  int v13; // [sp+24h] [bp-28h]@1
  void *v14; // [sp+28h] [bp-24h]@1
  int v15; // [sp+2Ch] [bp-20h]@1
  signed int v16; // [sp+30h] [bp-1Ch]@1
  signed int v17; // [sp+34h] [bp-18h]@1
  int v18; // [sp+38h] [bp-14h]@1
  int v19; // [sp+3Ch] [bp-10h]@1
  int v20; // [sp+48h] [bp-4h]@1

  v4 = 138263444;
  v5 = 32;
  v6 = &gInterviewOutlineCursorTiles;
  v7 = 67328;
  v8 = 138262592;
  v9 = 131328;
  v10 = 138262848;
  v11 = 196864;
  v12 = 0;
  v13 = 0;
  v14 = &InterviewPalette_0;
  v15 = 0;
  v16 = 138262560;
  v17 = 1;
  v18 = 0;
  v19 = 0;
  LoadSpriteSheets(&v4);
  v0 = LoadSpritePalettes((int)&v14);
  v1 = sub_80E8268(v0);
  v2 = sub_80E8818(v1);
  sub_80E8A7C(v2);
  return v20;
}
