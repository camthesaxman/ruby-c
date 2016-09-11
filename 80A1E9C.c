int __fastcall sub_80A1E9C(int a1, _BYTE *a2, unsigned __int8 a3)
{
  int v3; // r6@1
  _BYTE *v4; // r5@1
  int v5; // r4@1
  _BYTE *v6; // r0@1
  _BYTE *v7; // r0@1
  int v8; // r6@1
  char v10; // [sp+0h] [bp-14h]@1
  char v11; // [sp+1h] [bp-13h]@1
  char v12; // [sp+2h] [bp-12h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  sub_8072CD4(&v10, &v11, &v12);
  v6 = (_BYTE *)sub_80A1E58(v3, v5);
  v7 = StringCopy(v6, v4);
  v8 = (int)v7;
  if ( v5 != 255 )
  {
    *v7 = -4;
    v7[1] = 4;
    v7[2] = v10;
    v7[3] = v11;
    v7[4] = v12;
    v7[5] = -1;
    v8 = (int)(v7 + 5);
  }
  return v8;
}
