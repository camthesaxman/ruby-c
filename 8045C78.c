int __fastcall sub_8045C78(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  int v3; // r7@1
  int v4; // r9@1
  int v5; // r6@2
  int v6; // r4@2
  int v7; // r5@3

  v3 = a1;
  v4 = a3;
  if ( a3 )
  {
    v6 = 4 * a1;
    v7 = sub_8046188(
           *(_DWORD *)(20 * a1 + 0x2017858),
           *(_DWORD *)(20 * a1 + 0x201785C),
           *(_DWORD *)(20 * a1 + 0x2017854),
           8) & 0xFF;
    v5 = sub_8045F58(
           *(_DWORD *)(20 * v3 + 0x2017854),
           *(_DWORD *)(20 * v3 + 0x2017858),
           *(_DWORD *)(20 * v3 + 0x201785C),
           20 * v3 + 33650784);
  }
  else
  {
    v5 = sub_8045F58(
           *(_DWORD *)(20 * a1 + 0x2017854),
           *(_DWORD *)(20 * a1 + 0x2017858),
           *(_DWORD *)(20 * a1 + 0x201785C),
           20 * a1 + 33650784);
    v6 = 4 * v3;
  }
  if ( v4 == 1 || !v4 && !(*(_BYTE *)(v6 + 33650688) & 0x10) )
    sub_8045D58(v3, v4);
  if ( v5 == -1 )
    *(_DWORD *)(4 * (v6 + v3) + 0x2017860) = 0;
  return v5;
}
