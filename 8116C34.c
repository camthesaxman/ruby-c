int __fastcall sub_8116C34(unsigned __int8 a1, int a2, unsigned __int16 a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r0@1
  int v8; // [sp+10h] [bp-4h]@0

  v4 = a2;
  v5 = a1;
  a4 = (unsigned __int16)a4;
  v6 = dword_3004B20[10 * a1];
  v20190B4 = v6;
  if ( !a2 )
    v4 = v6;
  v20190AC = v4;
  v20190A8 = a3;
  if ( a3 != 0xFFFF || a4 )
    v20190AA = a4;
  else
    v20190AA = -1;
  dword_3004B20[10 * v5] = (int)sub_8116BC0;
  return v8;
}
