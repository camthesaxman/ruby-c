int __fastcall sub_809A3D0(unsigned __int8 a1, char a2)
{
  char v2; // r10@1
  signed int v3; // r1@1
  int v4; // r8@4
  _BYTE *v5; // r5@6
  unsigned __int8 v6; // r0@6
  int v7; // r0@6
  unsigned int v8; // r7@6
  char *v9; // r1@7
  int v10; // r0@7
  int v11; // r4@7
  int v13; // [sp+0h] [bp-4Ch]@1
  signed int v14; // [sp+4h] [bp-48h]@1
  signed int v15; // [sp+8h] [bp-44h]@1
  int v16; // [sp+Ch] [bp-40h]@1
  signed int v17; // [sp+10h] [bp-3Ch]@1
  signed int v18; // [sp+14h] [bp-38h]@1
  int v19; // [sp+18h] [bp-34h]@1
  int v20; // [sp+1Ch] [bp-30h]@1
  unsigned int v21; // [sp+20h] [bp-2Ch]@6
  int v22; // [sp+24h] [bp-28h]@6
  int v23; // [sp+28h] [bp-24h]@1
  int v24; // [sp+48h] [bp-4h]@8

  v23 = a1;
  v2 = a2;
  v19 = 33556682;
  v20 = 197120;
  v13 = -624427005;
  v14 = 138130072;
  v15 = 138130096;
  v16 = 0;
  v17 = 136194320;
  v18 = 134222353;
  v3 = 0;
  if ( !v2000CCA )
    v3 = 1;
  v2000CCA = v3;
  if ( v3 )
  {
    v20 = (unsigned __int16)v20 | 0x40000;
    v4 = v2000CEC;
    v13 = -624361468;
  }
  else
  {
    v20 = (unsigned __int16)v20 | 0x30000;
    v4 = v2000CEC;
  }
  v5 = (_BYTE *)(9 * v23 + 33784804);
  sub_809A1BC(33556682, (int)v5);
  LoadSpriteSheet((int)&v19);
  LoadPalette((int)&gUnknown_083BB0A8 + 4 * *(_BYTE *)(v23 + 33784930), v4, 4);
  v6 = sub_8072CA4(v5);
  v7 = sub_809A6D0(v6) << 16;
  v21 = (unsigned int)v7 >> 16;
  v22 = ((v7 >> 16) + 192 * v2) & 0xFFFF;
  v8 = 0;
  do
  {
    v9 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&v13, v22 + 32 * v8, 28)];
    *(_DWORD *)(4 * v8 + 0x2000CF8) = v9;
    *((_WORD *)v9 + 23) = -6 * v2;
    *(_WORD *)(*(_DWORD *)(4 * v8 + 0x2000CF8) + 48) = v21 + 32 * v8;
    *(_WORD *)(*(_DWORD *)(4 * v8 + 0x2000CF8) + 50) = 1;
    v10 = *(_DWORD *)(4 * v8 + 0x2000CF8);
    *(_DWORD *)(v10 + 28) = sub_809A5E8;
    StartSpriteAnim(v10, v8);
    v11 = 4 * v8 + 33557744;
    *(_WORD *)(*(_DWORD *)v11 + 46) = -6 * v2;
    *(_WORD *)(*(_DWORD *)v11 + 48) = 1;
    *(_DWORD *)(*(_DWORD *)v11 + 28) = sub_809A61C;
    v8 = (v8 + 1) & 0xFFFF;
  }
  while ( v8 <= 1 );
  return v24;
}
