int __fastcall sub_8117158(unsigned __int8 a1)
{
  unsigned int v1; // r5@1
  __int16 *v2; // r7@12
  __int16 *v3; // r6@12
  unsigned __int8 v5; // [sp+8h] [bp-3Ch]@3
  unsigned __int8 v6; // [sp+9h] [bp-3Bh]@12
  __int16 v7; // [sp+Ah] [bp-3Ah]@11
  unsigned __int16 v8; // [sp+Ch] [bp-38h]@13
  __int16 v9; // [sp+Eh] [bp-36h]@11
  char v10[8]; // [sp+10h] [bp-34h]@4
  unsigned int v11; // [sp+18h] [bp-2Ch]@3
  __int16 *v12; // [sp+1Ch] [bp-28h]@11
  __int16 *v13; // [sp+20h] [bp-24h]@11
  int v14; // [sp+40h] [bp-4h]@15

  v1 = a1;
  v201902A = 1;
  sub_8117AA8(0, 0);
  sub_8124E2C(gBG1TilemapBuffer, 33654784, 14, 7);
  if ( v1 > 0xF )
  {
def_811719A:
    v11 = 1;
    v10[0] = v1;
_08117258:
    v5 = 0;
    if ( v11 > 0 )
    {
      v12 = &v9;
      v13 = &v7;
      do
      {
        *(_BYTE *)v12 = *((_BYTE *)&gUnknown_083F8C00 + 20 * (unsigned __int8)v10[v5] + 6);
        *v13 = *((_BYTE *)&gUnknown_083F8C00 + 20 * (unsigned __int8)v10[v5] + 3);
        v6 = 0;
        v2 = v13;
        v3 = v12;
        do
        {
          v8 = 32 * (v6 + *((_BYTE *)&gUnknown_083F8C00 + 20 * (unsigned __int8)v10[v5] + 4));
          gBG1TilemapBuffer[v8 + (unsigned __int16)*v2] = *(_WORD *)(6 * (v6 + *(_BYTE *)v3) + 0x20189A0);
          gBG1TilemapBuffer[v8 + (unsigned __int16)*v2 + 1] = *(_WORD *)(6 * (v6 + *(_BYTE *)v3) + 0x20189A2);
          gBG1TilemapBuffer[v8 + (unsigned __int16)*v2 + 2] = *(_WORD *)(6 * (v6++ + *(_BYTE *)v3) + 0x20189A4);
        }
        while ( v6 <= 2u );
        ++v5;
      }
      while ( v5 < v11 );
    }
  }
  else
  {
    switch ( v1 )
    {
      case 1u:
      case 2u:
      case 3u:
      case 4u:
        v11 = 4;
        v5 = 0;
        do
        {
          v10[v5] = v1 + 5 * v5;
          ++v5;
        }
        while ( v5 < v11 );
        goto _08117258;
      case 5u:
      case 0xAu:
      case 0xFu:
        v11 = 5;
        v5 = 0;
        do
        {
          v10[v5] = v1 + v5;
          ++v5;
        }
        while ( v5 < v11 );
        goto _08117258;
      default:
        goto def_811719A;
      case 0u:
        return v14;
    }
  }
  return v14;
}
