char *__fastcall sub_8099AFC(unsigned __int16 a1, int a2, unsigned __int16 a3, __int16 a4, char a5)
{
  __int16 v5; // r8@1
  int v6; // r10@1
  int v7; // r5@1
  int v8; // r2@2
  char *result; // r0@3
  signed int v10; // [sp+0h] [bp-3Ch]@1
  signed int v11; // [sp+4h] [bp-38h]@1
  signed int v12; // [sp+8h] [bp-34h]@1
  int v13; // [sp+Ch] [bp-30h]@1
  signed int v14; // [sp+10h] [bp-2Ch]@1
  signed int v15; // [sp+14h] [bp-28h]@1
  int v16; // [sp+18h] [bp-24h]@1

  v16 = a3;
  v5 = a4;
  v10 = -624951281;
  v11 = 138112812;
  v12 = 136194308;
  v13 = 0;
  v14 = 136194320;
  v15 = 134222353;
  v6 = mon_icon_convert_unown_species_id(a1);
  HIWORD(v10) = gMonIconPaletteIndices[v6] - 9536;
  v7 = (unsigned __int16)sub_80999E8(v6);
  if ( v7 != 0xFFFF )
  {
    v8 = (unsigned __int8)CreateSprite((int)&v10, v16, v5);
    if ( v8 != 64 )
    {
      result = &gSprites[68 * v8];
      *((_WORD *)result + 2) = *((_WORD *)result + 2) & 0xFC00 | v7 & 0x3FF;
      result[5] = result[5] & 0xF3 | 4 * (a5 & 3);
      *((_WORD *)result + 23) = v6;
      return result;
    }
    sub_8099AAC(v6);
  }
  return 0;
}
