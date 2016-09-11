int __fastcall sub_80562C0(_DWORD **a1, int **a2, int a3)
{
  int v3; // r4@2
  int v4; // r2@2
  int v5; // r6@3
  int v6; // r3@3
  int v8; // [sp+1Ch] [bp-4h]@0

  if ( a2 )
  {
    v3 = (*a2)[1];
    v4 = a3 + 7;
    if ( v4 >= 0 )
    {
      v5 = 0;
      v6 = dword_3004874 - v4;
      if ( v4 + v3 < dword_3004874 )
        v6 = (*a2)[1];
    }
    else
    {
      v5 = -v4;
      v6 = dword_3004874;
      if ( v4 + v3 < dword_3004874 )
        v6 = v4 + v3;
      v4 = 0;
    }
    sub_8056134(**a1 + 7, v4, a2, 0, v5, 8, v6);
  }
  return v8;
}
