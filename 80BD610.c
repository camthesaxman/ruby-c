int __fastcall sub_80BD610(int a1, int a2, int a3)
{
  unsigned __int8 *v3; // r4@1
  unsigned __int8 *v4; // r5@1
  unsigned __int8 *v5; // r6@1
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = (unsigned __int8 *)a1;
  v4 = (unsigned __int8 *)a2;
  v5 = (unsigned __int8 *)a3;
  sub_80BD3DC(a1, a2, a3);
  sub_80BD514(33714492, (int)v3, (int)v4, (int)v5);
  sub_80BD1FC(v3);
  sub_80BD1FC(v4);
  sub_80BD1FC(v5);
  sub_80BD328((int)v3, 1u);
  sub_80BD328((int)v4, 1u);
  sub_80BD328((int)v5, 1u);
  sub_80BD328((int)v3, 0);
  sub_80BD328((int)v4, 0);
  sub_80BD328((int)v5, 0);
  return v7;
}
