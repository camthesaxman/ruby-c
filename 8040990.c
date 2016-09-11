int __fastcall sub_8040990(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r0@1

  v1 = a1;
  v2 = (unsigned __int16)GetMonData(a1, 65, 0);
  v3 = GetMonData(v1, 1, 0);
  v4 = GetMonData(v1, 0, 0);
  return sub_80409C8(v2, v3, v4);
}
