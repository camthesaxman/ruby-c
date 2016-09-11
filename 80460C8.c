int __fastcall sub_80460C8(int *a1, int a2, int a3)
{
  int *v3; // r5@1
  _WORD *v4; // r6@1
  int v5; // r4@1
  __int16 v6; // r7@1
  int v7; // r0@2
  int v8; // r1@3
  int v9; // r0@4

  v3 = a1;
  v4 = (_WORD *)a2;
  v5 = a3;
  v6 = sub_8045F58(*a1, v3[1], v3[2], a2, 6, 1u);
  sub_8046128(v3, v4, v5);
  if ( *v3 > 47 )
    v8 = *v4;
  else
    v7 = *(_DWORD *)v4 << 8;
  v9 = *(_WORD *)v3;
  sub_804373C();
  return v6;
}
