int __fastcall obj_id_set_rotscale(unsigned __int8 a1, unsigned __int16 a2, int a3, unsigned __int16 a4)
{
  int v4; // r4@1
  unsigned int v5; // r4@3
  __int16 *v6; // r4@3
  unsigned int v8; // [sp+0h] [bp-1Ch]@1
  unsigned int v9; // [sp+4h] [bp-18h]@1
  char v10; // [sp+8h] [bp-14h]@3
  __int16 v11; // [sp+Ah] [bp-12h]@3
  __int16 v12; // [sp+Ch] [bp-10h]@3
  __int16 v13; // [sp+Eh] [bp-Eh]@3
  int v14; // [sp+18h] [bp-4h]@3

  v4 = a1;
  v8 = a2 | (a3 << 16);
  v9 = v9 & 0xFFFF0000 | a4;
  if ( sub_8078E38() << 24 )
    v8 = v8 & 0xFFFF0000 | 0xFFFF * (unsigned __int16)v8 & 0xFFFF;
  v5 = (unsigned int)(unsigned __int8)gSprites[68 * v4 + 3] << 26 >> 27;
  ObjAffineSet(&v8, &v10, 1, 2);
  v6 = &gOamMatrices[4 * v5];
  *v6 = *(_WORD *)&v10;
  v6[1] = v11;
  v6[2] = v12;
  v6[3] = v13;
  return v14;
}
