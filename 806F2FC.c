int __fastcall sub_806F2FC(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( !v202E8F6 )
  {
    sub_806DF60(v201C004, v201C005);
    if ( v201B282 == 1 )
    {
      sub_8070C54(v1);
    }
    else
    {
      dword_3004B20[10 * v201C004] = v201C010;
      DestroyTask(v2);
    }
  }
  return v4;
}
