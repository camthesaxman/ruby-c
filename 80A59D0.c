int __fastcall sub_80A59D0(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r6@3
  int v3; // r0@3
  int v4; // r0@3
  int *v5; // r1@8
  int (__fastcall *v6)(unsigned __int8); // r0@8
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  byte_3000700 = 0;
  if ( byte_3000701 == 5 )
    byte_3000700 = 1;
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 14) = (unsigned __int8)byte_3005D10[4 * v2038559 + 1]
                      + (unsigned __int8)byte_3005D10[4 * v2038559]
                      + 1;
  v3 = sub_80A48E8(a1, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
  v4 = sub_80A73FC(v3);
  if ( (unsigned __int8)sub_80F9344(v4) != 1 || byte_3000701 == 5 )
  {
    sub_80A4BF0((int)gBG1TilemapBuffer);
    if ( v2038559 == 3 && byte_3000701 != 5 )
    {
      v5 = &dword_3004B20[10 * v1];
      v6 = sub_80A5600;
    }
    else
    {
      v5 = &dword_3004B20[10 * v1];
      v6 = sub_80A5414;
    }
    *v5 = (int)v6;
  }
  else
  {
    sub_80A57C4();
    *v2 = (int)sub_80A5888;
  }
  return v8;
}
