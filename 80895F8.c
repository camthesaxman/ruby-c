int __fastcall sub_80895F8(int a1, int a2, __int16 a3)
{
  int *v3; // r0@2
  int (*v4)(); // r1@2
  int v6; // [sp+0h] [bp-10h]@1
  int v7; // [sp+4h] [bp-Ch]@1
  int v8; // [sp+Ch] [bp-4h]@0

  v6 = a1;
  v7 = a2;
  if ( a2 == -1570766847 )
  {
    v3 = &dword_3004DC0;
    dword_3004DC0 = (int)&word_3004DE2;
    dword_3004DC4 = (int)&word_3005562;
    v4 = sub_80896F4;
  }
  else
  {
    v3 = &dword_3004DC0;
    dword_3004DC0 = (int)&unk_3004DE4;
    dword_3004DC4 = (int)algn_3005564;
    v4 = sub_8089714;
  }
  v3[4] = (int)v4;
  v3[3] = v7;
  v3[2] = v6;
  *((_BYTE *)v3 + 21) = a3;
  *((_BYTE *)v3 + 22) = HIBYTE(a3);
  *((_BYTE *)v3 + 23) = HIBYTE(a3);
  return v8;
}
