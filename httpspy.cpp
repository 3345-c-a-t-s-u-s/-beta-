if not game:IsLoaded() then
	print('HTTP SPY GAME IS NOT LOAD')
	repeat task.wait(0.1) until game:IsLoaded()
end

function to_base64(data)
    local b = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/'
    return ((data:gsub('.', function(x) 
        local r,b='',x:byte()
        for i=8,1,-1 do r=r..(b%2^i-b%2^(i-1)>0 and '1' or '0') end
        return r;
    end)..'0000'):gsub('%d%d%d?%d?%d?%d?', function(x)
        if (#x < 6) then return '' end
        local c=0
        for i=1,6 do c=c+(x:sub(i,i)=='1' and 2^(6-i) or 0) end
        return b:sub(c+1,c+1)
    end)..({ '', '==', '=' })[#data%3+1])
end

cloneref = cloneref or function(c) return c end
clonefunction = clonefunction or function(c) return c end

getgenv().isfunctionhooked = function(g)
	return false;
end

local _split = clonefunction(string.split);
local _match = clonefunction(string.match);
local _gmatch = clonefunction(string.gmatch);
local _upper = clonefunction(string.upper);
local _gsub = clonefunction(string.gsub);
local _format = clonefunction(string.format);
local _lower = clonefunction(string.lower);
local _sub = clonefunction(string.sub);
local _pack = clonefunction(string.pack);
local _find = clonefunction(string.find);
local _char = clonefunction(string.char);
local _packsize = clonefunction(string.packsize);
local _reverse = clonefunction(string.reverse);
local _byte = clonefunction(string.byte);
local _unpack = clonefunction(string.unpack);
local _rep = clonefunction(string.rep);
local _len = clonefunction(string.len);
local oldtostring = clonefunction(tostring)
local insert = clonefunction(table.insert)
local createid = clonefunction(math.random)
local FindFirstChild = clonefunction(game.FindFirstChild)
local CoreGui = cloneref(game:FindFirstChild('CoreGui') or game.Players.LocalPlayer.PlayerGui)
local wa = clonefunction(task.wait)
local pcalls = clonefunction(pcall)

local httpservice = cloneref(game:GetService("HttpService"))
local GetChildren = clonefunction(game.GetChildren)
local normalrequest = clonefunction(http.request)
local JSON_Encoded = clonefunction(httpservice.JSONEncode)
local span = clonefunction(task.spawn)
local hooks = {(syn and syn.request) , (http and http.request) , http_request , (fluxus and fluxus.request) , request , httprequest}
local HttpLogger = {}

local ScreenGui = Instance.new("ScreenGui")
local Frame = Instance.new("Frame")
local TextLabel = Instance.new("TextLabel")
local HttpLog = Instance.new("ScrollingFrame")
local UIListLayout = Instance.new("UIListLayout")
local HttpPanel = Instance.new("Frame")
local TextLabel_2 = Instance.new("TextLabel")
local UrlText = Instance.new("TextLabel")
local Body = Instance.new("TextLabel")
local BodyText = Instance.new("ScrollingFrame")
local UIListLayout_2 = Instance.new("UIListLayout")
local Response = Instance.new("TextLabel")
local ResponseText = Instance.new("ScrollingFrame")
local UIListLayout_3 = Instance.new("UIListLayout")
local CopyUrl = Instance.new("TextButton")
local UIStroke = Instance.new("UIStroke")
local CopyResponse = Instance.new("TextButton")
local UIStroke_2 = Instance.new("UIStroke")
local CopyBody = Instance.new("TextButton")
local UIStroke_3 = Instance.new("UIStroke")
local UIStroke_4 = Instance.new("UIStroke")

ScreenGui.Parent = CoreGui
ScreenGui.Name = "RobloxCoreGui"

Frame.Parent = ScreenGui
Frame.AnchorPoint = Vector2.new(0.5, 0.5)
Frame.BackgroundColor3 = Color3.fromRGB(27, 27, 27)
Frame.BorderColor3 = Color3.fromRGB(0, 0, 0)
Frame.BorderSizePixel = 0
Frame.Position = UDim2.new(0.5, 0, 0.5, 0)
Frame.Size = UDim2.new(0, 475, 0, 329)

TextLabel.Parent = Frame
TextLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TextLabel.BackgroundTransparency = 1.000
TextLabel.BorderColor3 = Color3.fromRGB(0, 0, 0)
TextLabel.BorderSizePixel = 0
TextLabel.Position = UDim2.new(0.0126315793, 0, 0.0182370823, 0)
TextLabel.Size = UDim2.new(0.987368405, 0, 0.0408815071, 0)
TextLabel.ZIndex = 10
TextLabel.Font = Enum.Font.GothamBold
TextLabel.RichText = true
TextLabel.Text = "<b>H</b>T<b>T</b>P S<b>P</b><b>Y</b> - v1 <font transparency=\"0.5\" size=\"10\">by BEDOL HUB</font>"
TextLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
TextLabel.TextScaled = true
TextLabel.TextSize = 14.000
TextLabel.TextWrapped = true
TextLabel.TextXAlignment = Enum.TextXAlignment.Left

HttpLog.Name = to_base64("RobloxIndex")
HttpLog.Parent = Frame
HttpLog.Active = true
HttpLog.BackgroundColor3 = Color3.fromRGB(39, 39, 39)
HttpLog.BorderColor3 = Color3.fromRGB(0, 0, 0)
HttpLog.BorderSizePixel = 0
HttpLog.Position = UDim2.new(0.0126315793, 0, 0.0820668712, 0)
HttpLog.Size = UDim2.new(0.284210533, 0, 0.899999917, 0)
HttpLog.ZIndex = 5
HttpLog.ScrollBarThickness = 1

UIListLayout.Parent = HttpLog
UIListLayout.HorizontalAlignment = Enum.HorizontalAlignment.Center
UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
UIListLayout.Padding = UDim.new(0,5)

UIListLayout:GetPropertyChangedSignal('AbsoluteContentSize'):Connect(function()
	HttpLog.CanvasSize = UDim2.new(0,0,0,UIListLayout.AbsoluteContentSize.Y)
end)

HttpPanel.Name = to_base64("RobloxPanel")
HttpPanel.Parent = Frame
HttpPanel.BackgroundColor3 = Color3.fromRGB(39, 39, 39)
HttpPanel.BorderColor3 = Color3.fromRGB(0, 0, 0)
HttpPanel.BorderSizePixel = 0
HttpPanel.Position = UDim2.new(0.311578959, 0, 0.0820668712, 0)
HttpPanel.Size = UDim2.new(0.674736857, 0, 0.899999917, 0)
HttpPanel.ZIndex = 9

TextLabel_2.Parent = HttpPanel
TextLabel_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TextLabel_2.BackgroundTransparency = 1.000
TextLabel_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
TextLabel_2.BorderSizePixel = 0
TextLabel_2.Position = UDim2.new(0.0218408741, 0, 0.0202633236, 0)
TextLabel_2.Size = UDim2.new(0.506240249, 0, 0.0398360267, 0)
TextLabel_2.ZIndex = 11
TextLabel_2.Font = Enum.Font.GothamBold
TextLabel_2.RichText = true
TextLabel_2.Text = "<b>U</b>r<b>l</b>"
TextLabel_2.TextColor3 = Color3.fromRGB(255, 255, 255)
TextLabel_2.TextScaled = true
TextLabel_2.TextSize = 14.000
TextLabel_2.TextTransparency = 0.500
TextLabel_2.TextWrapped = true
TextLabel_2.TextXAlignment = Enum.TextXAlignment.Left

UrlText.Name = to_base64("UrlText")
UrlText.Parent = HttpPanel
UrlText.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
UrlText.BackgroundTransparency = 0.600
UrlText.BorderColor3 = Color3.fromRGB(0, 0, 0)
UrlText.BorderSizePixel = 0
UrlText.Position = UDim2.new(0.0249609984, 0, 0.0810535997, 0)
UrlText.Size = UDim2.new(0.955538213, 0, 0.0398360267, 0)
UrlText.ZIndex = 11
UrlText.Font = Enum.Font.GothamBold
UrlText.RichText = true
UrlText.Text = "<b>H</b><b>T</b>T<b>P</b> M<b>E</b>T<b>H</b>O<b>D</b>: Green = \"<b>G</b>E<b>T</b>\" , Purple = \"P<b>O</b><b>S</b>T\""
UrlText.TextColor3 = Color3.fromRGB(255, 255, 255)
UrlText.TextScaled = true
UrlText.TextSize = 14.000
UrlText.TextTransparency = 0.200
UrlText.TextWrapped = true
UrlText.TextXAlignment = Enum.TextXAlignment.Left

Body.Name = to_base64("Body")
Body.Parent = HttpPanel
Body.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Body.BackgroundTransparency = 1.000
Body.BorderColor3 = Color3.fromRGB(0, 0, 0)
Body.BorderSizePixel = 0
Body.Position = UDim2.new(0.0218408741, 0, 0.148598358, 0)
Body.Size = UDim2.new(0.506240249, 0, 0.0398360267, 0)
Body.ZIndex = 11
Body.Font = Enum.Font.GothamBold
Body.RichText = true
Body.Text = "<b>B</b>o<b>d</b>y"
Body.TextColor3 = Color3.fromRGB(255, 255, 255)
Body.TextScaled = true
Body.TextSize = 14.000
Body.TextTransparency = 0.500
Body.TextWrapped = true
Body.TextXAlignment = Enum.TextXAlignment.Left

BodyText.Name = to_base64("BodyText")
BodyText.Parent = HttpPanel
BodyText.Active = true
BodyText.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
BodyText.BackgroundTransparency = 0.600
BodyText.BorderColor3 = Color3.fromRGB(0, 0, 0)
BodyText.BorderSizePixel = 0
BodyText.Position = UDim2.new(0.0249609984, 0, 0.209388733, 0)
BodyText.Size = UDim2.new(0.955999851, 0, 0.259520471, 0)
BodyText.ZIndex = 11
BodyText.CanvasSize = UDim2.new(2, 0, 2, 0)
BodyText.ScrollBarThickness = 1

UIListLayout_2.Parent = BodyText
UIListLayout_2.SortOrder = Enum.SortOrder.LayoutOrder

UIListLayout_2:GetPropertyChangedSignal('AbsoluteContentSize'):Connect(function()
	BodyText.CanvasSize = UDim2.new(2,0,0,UIListLayout_2.AbsoluteContentSize.Y)
end)

Response.Name = to_base64("Core")
Response.Parent = HttpPanel
Response.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Response.BackgroundTransparency = 1.000
Response.BorderColor3 = Color3.fromRGB(0, 0, 0)
Response.BorderSizePixel = 0
Response.Position = UDim2.new(0.0218408741, 0, 0.509962797, 0)
Response.Size = UDim2.new(0.506240249, 0, 0.0398360267, 0)
Response.ZIndex = 11
Response.Font = Enum.Font.GothamBold
Response.Text = "<b>R</b>e<b>s</b>po<b>n</b>s</b>e"
Response.TextColor3 = Color3.fromRGB(255, 255, 255)
Response.TextScaled = true
Response.TextSize = 14.000
Response.TextTransparency = 0.500
Response.TextWrapped = true
Response.TextXAlignment = Enum.TextXAlignment.Left
Response.RichText = true

ResponseText.Name = to_base64("ResponseText")
ResponseText.Parent = HttpPanel
ResponseText.Active = true
ResponseText.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
ResponseText.BackgroundTransparency = 0.600
ResponseText.BorderColor3 = Color3.fromRGB(0, 0, 0)
ResponseText.BorderSizePixel = 0
ResponseText.Position = UDim2.new(0.0249609984, 0, 0.574130416, 0)
ResponseText.Size = UDim2.new(0.955999851, 0, 0.259520471, 0)
ResponseText.ZIndex = 11
ResponseText.CanvasSize = UDim2.new(2, 0, 2, 0)
ResponseText.ScrollBarThickness = 1

UIListLayout_3.Parent = ResponseText
UIListLayout_3.SortOrder = Enum.SortOrder.LayoutOrder

UIListLayout_3:GetPropertyChangedSignal('AbsoluteContentSize'):Connect(function()
	ResponseText.CanvasSize = UDim2.new(2,0,0,UIListLayout_3.AbsoluteContentSize.Y)
end)

CopyUrl.Name = to_base64("CopyUrl")
CopyUrl.Parent = HttpPanel
CopyUrl.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
CopyUrl.BackgroundTransparency = 0.500
CopyUrl.BorderColor3 = Color3.fromRGB(0, 0, 0)
CopyUrl.BorderSizePixel = 0
CopyUrl.Position = UDim2.new(0.0249609984, 0, 0.891590774, 0)
CopyUrl.Size = UDim2.new(0.200000018, 0, 0.0547787212, 0)
CopyUrl.ZIndex = 11
CopyUrl.Font = Enum.Font.SourceSansBold
CopyUrl.RichText = true
CopyUrl.Text = "<b>C</b>o<b>py</b> <b>U</b>r<b>l</b>"
CopyUrl.TextColor3 = Color3.fromRGB(255, 255, 255)
CopyUrl.TextScaled = true
CopyUrl.TextSize = 14.000
CopyUrl.TextWrapped = true

UIStroke.Thickness = 0.500
UIStroke.Color = Color3.fromRGB(255, 255, 255)
UIStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
UIStroke.Parent = CopyUrl

CopyResponse.Name = to_base64("CopyResponse")
CopyResponse.Parent = HttpPanel
CopyResponse.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
CopyResponse.BackgroundTransparency = 0.500
CopyResponse.BorderColor3 = Color3.fromRGB(0, 0, 0)
CopyResponse.BorderSizePixel = 0
CopyResponse.Position = UDim2.new(0.262090474, 0, 0.891590774, 0)
CopyResponse.Size = UDim2.new(0.324805051, 0, 0.0547787212, 0)
CopyResponse.ZIndex = 11
CopyResponse.Font = Enum.Font.SourceSansBold
CopyResponse.RichText = true
CopyResponse.Text = "<b>C</b>o<b>py</b> <b>R</b>es<b>pon</b>se"
CopyResponse.TextColor3 = Color3.fromRGB(255, 255, 255)
CopyResponse.TextScaled = true
CopyResponse.TextSize = 14.000
CopyResponse.TextWrapped = true

UIStroke_2.Thickness = 0.500
UIStroke_2.Color = Color3.fromRGB(255, 255, 255)
UIStroke_2.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
UIStroke_2.Parent = CopyResponse

CopyBody.Name = to_base64("CopyBody")
CopyBody.Parent = HttpPanel
CopyBody.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
CopyBody.BackgroundTransparency = 0.500
CopyBody.BorderColor3 = Color3.fromRGB(0, 0, 0)
CopyBody.BorderSizePixel = 0
CopyBody.Position = UDim2.new(0.614664614, 0, 0.891590774, 0)
CopyBody.Size = UDim2.new(0.256162316, 0, 0.0547787212, 0)
CopyBody.ZIndex = 11
CopyBody.Font = Enum.Font.SourceSansBold
CopyBody.RichText = true
CopyBody.Text = "<b>Co</b>py <b>Bo</b><b>dy</b>"
CopyBody.TextColor3 = Color3.fromRGB(255, 255, 255)
CopyBody.TextScaled = true
CopyBody.TextSize = 14.000
CopyBody.TextWrapped = true

UIStroke_3.Thickness = 0.500
UIStroke_3.Color = Color3.fromRGB(255, 255, 255)
UIStroke_3.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
UIStroke_3.Parent = CopyBody

UIStroke_4.Thickness = 0.500
UIStroke_4.Color = Color3.fromRGB(165, 165, 165)
UIStroke_4.Parent = Frame

local rwget = clonefunction(rawget)

local function add(gg,res)
    insert(HttpLogger,{
        Url = rwget(gg,'Url'),
        Method = rwget(gg,'Method'),
        Body = rwget(gg,'Body'),
        Response = rwget(res,'Body'),
        Id = createid(1,1000)
    })
end

if (syn and syn.request) then
	local old = clonefunction(syn.request)
	getgenv().syn.request = function(gg)
		local res = old(gg)

        add(gg,res)

		return res
	end
end

if (http and http.request) then
	local old = clonefunction(http.request)
	getgenv().http.request = function(gg)
		local res = old(gg)

		add(gg,res)

		return res
	end
end

if (fluxus and fluxus.request) then
	local old = clonefunction((fluxus and fluxus.request))
	getgenv().fluxus.request = function(gg)
		local res = old(gg)

		add(gg,res)

		return res
	end
end

if http_request then
	local old = clonefunction(http_request)
	getgenv().http_request = function(gg)
		local res = old(gg)

		add(gg,res)

		return res
	end
end

if request then
	local old = clonefunction(request)
	getgenv().request = function(gg)
		local res = old(gg)

		add(gg,res)

		return res
	end
end

local stringify
local insert = clonefunction(table.insert)
local concat = clonefunction(table.concat)
local nexts = clonefunction(next)
local createInstance = clonefunction(Instance.new)

stringify = function(v, spaces, usesemicolon, depth)
	if type(v) ~= 'table' then
		return oldtostring(v)
	elseif not nexts(v) then
		return '{}'
	elseif typeof(v) == "string" then
		return tostring(v)
	end

	spaces = spaces or 4
	depth = depth or 1

	local space = _rep(" ",depth * spaces)
	local sep = usesemicolon and ";" or ","
	local concatenationBuilder = {"{"}

	for k, x in nexts, v do
		insert(concatenationBuilder, _format("\n%s[%s] = %s%s",space,type(k)=='number'and oldtostring(k)or _format('"%s"',oldtostring(k)), stringify(x, spaces, usesemicolon, depth+1), sep))
	end

	local s = concat(concatenationBuilder)
	return _format("%s\n%s}",_sub(s,1,-2), _sub(space,1, -spaces-1))
end

local function newline()
	local Line = createInstance("TextLabel")
	local UIAspectRatioConstraint = createInstance("UIAspectRatioConstraint")

	Line.Name = "Line"
	Line.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
	Line.BackgroundTransparency = 0.600
	Line.BorderColor3 = Color3.fromRGB(0, 0, 0)
	Line.BorderSizePixel = 0
	Line.Position = UDim2.new(0.0249609984, 0, 0.0810535997, 0)
	Line.Size = UDim2.new(1, 0, 0.5, 0)
	Line.ZIndex = 11
	Line.Font = Enum.Font.GothamBold
	Line.Text = "{}"
	Line.TextColor3 = Color3.fromRGB(255, 255, 255)
	Line.TextScaled = true
	Line.TextSize = 14.000
	Line.TextTransparency = 0.200
	Line.TextWrapped = true
	Line.TextXAlignment = Enum.TextXAlignment.Left

	UIAspectRatioConstraint.Parent = Line
	UIAspectRatioConstraint.AspectRatio = 65.000
	UIAspectRatioConstraint.AspectType = Enum.AspectType.ScaleWithParentSize

	return Line
end

local function splitLines(inputString)
	local lines = {}

	local err = pcalls(function()
		for line in _gmatch(inputString,"[^\r\n]+") do wa()
			insert(lines, line)
		end
	end)

	if not err then
		return inputString
	end

	return lines
end

local UrlSelcet
local ResSelcet
local BodySelcet
local toclp = clonefunction(setclipboard or toclipboard)

CopyUrl.MouseButton1Click:Connect(function()
	toclp(oldtostring(UrlSelcet))
end)

CopyBody.MouseButton1Click:Connect(function()
	toclp(oldtostring(BodySelcet))
end)

CopyResponse.MouseButton1Click:Connect(function()
	toclp(oldtostring(ResSelcet))
end)

local Destroy = clonefunction(game.Destroy)
local createtab = function(trype,url,httpinfo)

	if FindFirstChild(HttpLog, oldtostring(httpinfo.Id)) then
		return
	end

	local gg = {
		['GET'] = Color3.fromRGB(34, 255, 0),
		['POST'] = Color3.fromRGB(149, 0, 255),
		['DELETE'] = Color3.new(0, 0.898039, 1),
		['OPTIONS'] = Color3.fromRGB(0, 255, 115)
	}

    wa(0.55)

	local myinfo = httpinfo
	local HttpLogger = createInstance("Frame")
	local UIAspectRatioConstraint = createInstance("UIAspectRatioConstraint")
	local HttpType = createInstance("Frame")
	local TextLabel = createInstance("TextLabel")
	local Button = createInstance("TextButton")

	HttpLogger.Name = oldtostring(httpinfo.Id)
	HttpLogger.Parent = HttpLog
	HttpLogger.BackgroundColor3 = Color3.fromRGB(34, 34, 34)
	HttpLogger.BorderColor3 = Color3.fromRGB(0, 0, 0)
	HttpLogger.BorderSizePixel = 0
	HttpLogger.Size = UDim2.new(1, 0, 0.5, 0)
	HttpLogger.ZIndex = 7

	UIAspectRatioConstraint.Parent = HttpLogger
	UIAspectRatioConstraint.AspectRatio = 5.500
	UIAspectRatioConstraint.AspectType = Enum.AspectType.ScaleWithParentSize

	HttpType.Name = to_base64("HttpType")
	HttpType.Parent = HttpLogger
	HttpType.BackgroundColor3 = gg[trype]
	HttpType.BorderColor3 = Color3.fromRGB(0, 0, 0)
	HttpType.BorderSizePixel = 0
	HttpType.Size = UDim2.new(0.0500000007, 0, 1, 0)
	HttpType.ZIndex = 7

	TextLabel.Parent = HttpLogger
	TextLabel.AnchorPoint = Vector2.new(0.5, 0.5)
	TextLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	TextLabel.BackgroundTransparency = 1.000
	TextLabel.BorderColor3 = Color3.fromRGB(0, 0, 0)
	TextLabel.BorderSizePixel = 0
	TextLabel.Position = UDim2.new(1.79164815, 0, 0.5, 0)
	TextLabel.Size = UDim2.new(3.36477828, 0, 0.449999988, 0)
	TextLabel.ZIndex = 7
	TextLabel.Font = Enum.Font.GothamBold
	TextLabel.Text = url
	TextLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
	TextLabel.TextScaled = true
	TextLabel.TextSize = 14.000
	TextLabel.TextWrapped = true
	TextLabel.TextXAlignment = Enum.TextXAlignment.Left

	Button.Name = "Button"
	Button.Parent = HttpLogger
	Button.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	Button.BackgroundTransparency = 1.000
	Button.BorderColor3 = Color3.fromRGB(0, 0, 0)
	Button.BorderSizePixel = 0
	Button.Size = UDim2.new(1, 0, 1, 0)
	Button.ZIndex = 11
	Button.Font = Enum.Font.SourceSans
	Button.Text = ""
	Button.TextColor3 = Color3.fromRGB(0, 0, 0)
	Button.TextScaled = true
	Button.TextSize = 14.000
	Button.TextWrapped = true

	local body = stringify(myinfo.Body)
	local Response = stringify(myinfo.Response)

	Button.MouseButton1Click:Connect(function()
		UrlText.Text = myinfo.Url;
		UrlSelcet = myinfo.Url
		ResSelcet = Response
		BodySelcet = body

		for i,v in ipairs(GetChildren(BodyText)) do
			if oldtostring(v) ~= "UIListLayout" then
				Destroy(v);
			end
		end

		wa()

		for i,v in ipairs(splitLines(body)) do
			local g = newline();
			g.Text = v;
			g.Parent = BodyText;
		end

		wa()

		for i,v in ipairs(GetChildren(ResponseText)) do
			if oldtostring(v) ~= "UIListLayout" then
				Destroy(v);
			end
		end

		wa()

		for i,v in ipairs(splitLines(Response)) do
			local g = newline();
			g.Text = v;
			g.Parent = ResponseText;
		end
	end)
end

span(function()
	local ip = clonefunction(ipairs)
	
	while true do wa()
		pcalls(function()
			for i,v in ip(HttpLogger) do wa()
				createtab(v.Method,v.Url,v);
			end
		end)
	end
end)

local UIS = cloneref(game:GetService('UserInputService'))
local tweebn = cloneref(game:GetService('TweenService'))
local frame = Frame
local dragToggle = nil
local dragSpeed = 0.1
local dragStart = nil
local startPos = nil

local function updateInput(input)
	local delta = input.Position - dragStart
	local position = UDim2.new(startPos.X.Scale, startPos.X.Offset + delta.X,
		startPos.Y.Scale, startPos.Y.Offset + delta.Y)
	tweebn:Create(frame, TweenInfo.new(dragSpeed), {Position = position}):Play()
end

frame.InputBegan:Connect(function(input)
	if (input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch) then 
		dragToggle = true
		dragStart = input.Position
		startPos = frame.Position
		input.Changed:Connect(function()
			if input.UserInputState == Enum.UserInputState.End then
				dragToggle = false
			end
		end)
	end
end)

UIS.InputChanged:Connect(function(input)
	if input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch then
		if dragToggle then
			updateInput(input)
		end
	end
end)

local OldNamecall
OldNamecall = hookmetamethod(game, "__namecall", function(self, ...)
	local namecall = getnamecallmethod()
	local args = {...}

	if checkcaller() then
		if namecall == "find" or namecall == "match" or namecall == "gsub" or namecall == "gmatch" or namecall == "format" then
			if _find(args[1],'HTTP SPY') or _find(_lower(args[1]),'http') or _find(_lower(args[1]),'url') or _find(_lower(args[1]),'response') then
				if namecall == "find" or namecall == "match" then
					return nil
				elseif namecall == "gsub" or namecall == "format" then
					return args[1]
				elseif namecall == "gmatch" then
					return function()
						return ""
					end;
				end
			end
		end

		if namecall == "GetChildren" and oldtostring(self) == "CoreGui" then
			return CoreGuiList;
		end

		if namecall == "GetDescendants" and oldtostring(self) == "CoreGui" then
			return CoreGuiDescendants;
		end
	end

	return OldNamecall(self, ...)
end)


local OldIndex
OldIndex = hookmetamethod(game, "__index", function(self, i)

	if checkcaller() then
		if oldtostring(i) == "Text" or oldtostring(i) == "Name" then 
			if _find(i,'HTTP SPY') or _find(_lower(i),'http') or _find(_lower(i),'url') or _find(_lower(i),'response') then
				return "RobloxCoreGui";
			end
		end
	end

	return OldIndex(self, i)
end)

local toold
toold = hookfunction(tostring,function(s)
	if _find(oldtostring(s),'HTTP SPY') or _find(_lower(oldtostring(s)),'http') or _find(_lower(oldtostring(s)),'url') or _find(_lower(oldtostring(s)),'response') then
		return "RobloxCoreGui";
	end

	return toold(s)
end)
