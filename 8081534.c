int __fastcall sub_8081534(__int16 a1, __int16 a2, int a3, int a4, __int16 a5, unsigned __int8 a6)
{
  __int16 v6; // r8@1
  __int16 v7; // r9@1
  int v8; // r5@1
  int v9; // r4@1
  int v10; // r2@1
  _BYTE *v11; // r1@1

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = (unsigned __int8)CreateTask((int)sub_8081424, 80);
  v11 = &byte_3004B28[40 * v10];
  *((_WORD *)v11 + 3) = v8;
  *((_WORD *)v11 + 4) = v9;
  *((_WORD *)v11 + 1) = v6;
  *((_WORD *)v11 + 2) = v7;
  *((_WORD *)v11 + 6) = a5;
  if ( v8 >= v9 )
    *((_WORD *)v11 + 5) = -a6;
  else
    *((_WORD *)v11 + 5) = a6;
  return v10;
}
