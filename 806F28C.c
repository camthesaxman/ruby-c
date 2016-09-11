int __fastcall sub_806F28C(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  unsigned int v3; // r6@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( task_is_not_running_overworld_fanfare() << 24 && (word_300179E & 1 || word_300179E & 2) )
  {
    sub_806DF60(v201C004, v201C005);
    if ( v201B282 == 1 )
    {
      sub_8070C54(v2);
    }
    else
    {
      dword_3004B20[10 * v201C004] = v201C010;
      DestroyTask(v3);
    }
  }
  return v5;
}
