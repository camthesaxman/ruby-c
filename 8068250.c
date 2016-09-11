int __fastcall TryGetScriptOnPressingA(int a1, unsigned __int8 a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r8@1
  unsigned int v6; // r2@1
  unsigned int v7; // r4@1
  unsigned int v8; // r7@1
  int result; // r0@1

  v3 = a1;
  v4 = a2;
  v5 = a2;
  v6 = a3 << 24;
  v7 = v6 >> 24;
  v8 = v6 >> 24;
  result = sub_8068364();
  if ( !result )
  {
    result = TryGetInvisibleMapObjectScript(v3, v4, v7);
    if ( !result )
    {
      result = sub_8068500(v3, v4, v7);
      if ( !result )
      {
        result = TryGetFieldMoveScript(v3, v5, v8);
        if ( !result )
          result = 0;
      }
    }
  }
  return result;
}
