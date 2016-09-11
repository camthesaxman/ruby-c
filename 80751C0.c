int __fastcall sub_80751C0(int a1, char a2, signed int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  char v5; // r10@1
  unsigned int v6; // r8@1
  signed int v7; // r6@1
  signed int v8; // r7@1
  signed int v9; // r5@1
  unsigned int v10; // r0@8
  int v11; // r1@8
  int v12; // r0@8
  int v13; // r0@15
  char *v14; // r1@15
  int v16; // [sp+0h] [bp-28h]@1
  signed int v17; // [sp+4h] [bp-24h]@1
  int v18; // [sp+24h] [bp-4h]@0

  v5 = a2;
  a3 = (unsigned __int8)a3;
  v16 = a4;
  v6 = (unsigned int)((a1 << 16) - 0x10000) >> 16;
  v7 = 0;
  v8 = 140;
  v9 = 15360;
  v17 = 0;
  if ( a5 <= 5u )
  {
    switch ( a5 )
    {
      case 1u:
        v8 = 20;
        v7 = 225;
        break;
      case 2u:
        v8 = 30;
        v7 = 225;
        v9 = 15600;
        v17 = 20;
        a3 = 80;
        break;
      case 3u:
        v8 = 50;
        v7 = 200;
        v9 = 14800;
        break;
      case 4u:
        v8 = 20;
        v7 = 220;
        v9 = 15800;
        break;
      case 5u:
        v7 = 200;
        v9 = 14500;
        break;
      default:
        break;
    }
  }
  sub_81DF50C(a3);
  sub_81DF520(v5);
  sub_81DF538(v9);
  sub_81DF570(v8);
  sub_81DF588(0);
  sub_81DF57C(v7);
  sub_81DF5AC(v17);
  sub_81DF618(v16);
  v10 = speciesid_conv(v6);
  v11 = v10 & 0x7F;
  v12 = (v10 >> 7) & 0xFF;
  if ( v12 == 1 )
  {
    v13 = 12 * v11;
    v14 = (char *)&voicegroup_8452B90;
  }
  else if ( v12 > 1 )
  {
    if ( v12 == 2 )
    {
      v13 = 12 * v11;
      v14 = (char *)&voicegroup_8453190;
    }
    else
    {
      if ( v12 != 3 )
        return v18;
      v13 = 12 * v11;
      v14 = (char *)&voicegroup_8453790;
    }
  }
  else
  {
    if ( v12 )
      return v18;
    v13 = 12 * v11;
    v14 = (char *)&voicegroup_8452590;
  }
  v202F79C = sub_81DF43C(&v14[v13]);
  return v18;
}
