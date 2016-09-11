int __fastcall sub_8110158(int a1, int a2, unsigned __int16 a3, signed int a4, char a5)
{
  int v5; // r5@1
  int v6; // r7@1
  signed int v7; // r10@1
  unsigned __int16 v8; // r9@1
  signed int v9; // r6@1
  int v11; // [sp+1Ch] [bp-4h]@0

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  sub_811011C(a4);
  sub_811003C(v5);
  v9 = sub_810FFEC(v5, v6, v8);
  if ( v9 == 5 )
  {
    v9 = 4;
    sub_810FF78(v5 + 64);
    if ( a5 == 1 )
    {
      *(_BYTE *)(v5 + 64) = -4;
      *(_BYTE *)(v5 + 65) = 21;
      StringCopyN(v5 + 66, v6, 5);
    }
    else
    {
      StringCopyN(v5 + 64, v6, 7);
    }
    *(_WORD *)(v5 + 72) = v8;
  }
  sub_81100B8(v5 + 16 * v9, v7);
  sub_811003C(v5);
  return v11;
}
